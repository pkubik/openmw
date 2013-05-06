#ifndef CSM_WOLRD_REDIDADAPTER_H
#define CSM_WOLRD_REFIDADAPTER_H

#include <string>

class QVariant;

namespace CSMWorld
{
    class RefIdColumn;
    class RefIdData;
    class RecordBase;

    class RefIdAdapter
    {
            // not implemented
            RefIdAdapter (const RefIdAdapter&);
            RefIdAdapter& operator= (const RefIdAdapter&);

        public:

            RefIdAdapter();

            virtual ~RefIdAdapter();

            virtual QVariant getData (const RefIdColumn *column, const RefIdData& data) const = 0;

            virtual void setData (const RefIdColumn *column, RefIdData& data, const QVariant& value)
                const = 0;
            ///< If the data type does not match an exception is thrown.

            virtual std::string getId (const RecordBase& record) const = 0;
    };
}

#endif