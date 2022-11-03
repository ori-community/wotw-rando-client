#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::Common::SqlUdtStorage {
    IL2CPP_REGISTER_METHOD(0x02861550, void, ctor_1, (app::SqlUdtStorage * this_ptr, app::DataColumn* column, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x02861620, void, ctor_2, (app::SqlUdtStorage * this_ptr, app::DataColumn* column, app::Type* type, app::Object* null_value))
    IL2CPP_REGISTER_METHOD(0x028617D0, app::Object*, GetStaticNullForUdtType, (app::Type * type))
    IL2CPP_REGISTER_METHODINFO(0x04728D70, SqlUdtStorage_GetStaticNullForUdtType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02861B60, bool, IsNull, (app::SqlUdtStorage * this_ptr, int32_t record))
    IL2CPP_REGISTER_METHOD(0x02861C70, app::Object*, Aggregate, (app::SqlUdtStorage * this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind))
    IL2CPP_REGISTER_METHODINFO(0x04715998, SqlUdtStorage_Aggregate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02861CC0, int32_t, Compare, (app::SqlUdtStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02861D10, int32_t, CompareValueTo, (app::SqlUdtStorage * this_ptr, int32_t record_no1, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04749870, SqlUdtStorage_CompareValueTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02861F70, void, Copy, (app::SqlUdtStorage * this_ptr, int32_t record_no1, int32_t record_no2))
    IL2CPP_REGISTER_METHOD(0x02846A70, app::Object*, Get, (app::SqlUdtStorage * this_ptr, int32_t record_no))
    IL2CPP_REGISTER_METHOD(0x02862050, void, Set, (app::SqlUdtStorage * this_ptr, int32_t record_no, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x0472EF58, SqlUdtStorage_Set__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028622F0, void, SetCapacity, (app::SqlUdtStorage * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02862400, app::Object*, ConvertXmlToObject_1, (app::SqlUdtStorage * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x02862870, app::Object*, ConvertXmlToObject_2, (app::SqlUdtStorage * this_ptr, app::XmlReader* xml_reader, app::XmlRootAttribute* xml_attrib))
    IL2CPP_REGISTER_METHOD(0x02862AD0, app::String*, ConvertObjectToXml_1, (app::SqlUdtStorage * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02862EA0, void, ConvertObjectToXml_2, (app::SqlUdtStorage * this_ptr, app::Object* value, app::XmlWriter* xml_writer, app::XmlRootAttribute* xml_attrib))
    IL2CPP_REGISTER_METHOD(0x02863000, app::Object*, GetEmptyStorage, (app::SqlUdtStorage * this_ptr, int32_t record_count))
    IL2CPP_REGISTER_METHOD(0x02863080, void, CopyValue, (app::SqlUdtStorage * this_ptr, int32_t record, app::Object* store, app::BitArray* nullbits, int32_t store_index))
    IL2CPP_REGISTER_METHOD(0x02863250, void, SetStorage, (app::SqlUdtStorage * this_ptr, app::Object* store, app::BitArray* nullbits))
    IL2CPP_REGISTER_METHOD(0x02863310, void, cctor, ())
} // namespace app::classes::System::Data::Common::SqlUdtStorage
