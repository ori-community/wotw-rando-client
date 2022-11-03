#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Schema::XmlNumeric2Converter {
    IL2CPP_REGISTER_METHOD(0x02254180, void, ctor, (app::XmlNumeric2Converter * this_ptr, app::XmlSchemaType* schema_type))
    IL2CPP_REGISTER_METHOD(0x02254230, app::XmlValueConverter*, Create, (app::XmlSchemaType * schema_type))
    IL2CPP_REGISTER_METHOD(0x022543F0, double, ToDouble_1, (app::XmlNumeric2Converter * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04742D50, XmlNumeric2Converter_ToDouble__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02254510, double, ToDouble_2, (app::XmlNumeric2Converter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x0473C4D8, XmlNumeric2Converter_ToDouble_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022548C0, float, ToSingle_1, (app::XmlNumeric2Converter * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x022548D0, float, ToSingle_2, (app::XmlNumeric2Converter * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04723F90, XmlNumeric2Converter_ToSingle_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022549F0, float, ToSingle_3, (app::XmlNumeric2Converter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04767860, XmlNumeric2Converter_ToSingle_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02254E00, app::String*, ToString_1, (app::XmlNumeric2Converter * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x02254F00, app::String*, ToString_2, (app::XmlNumeric2Converter * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x02254FE0, app::String*, ToString_3, (app::XmlNumeric2Converter * this_ptr, app::Object* value, app::IXmlNamespaceResolver* ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x04782A20, XmlNumeric2Converter_ToString_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02255380, app::Object*, ChangeType_1, (app::XmlNumeric2Converter * this_ptr, double value, app::Type* destination_type))
    IL2CPP_REGISTER_METHODINFO(0x04780198, XmlNumeric2Converter_ChangeType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02255880, app::Object*, ChangeType_2, (app::XmlNumeric2Converter * this_ptr, app::String* value, app::Type* destination_type, app::IXmlNamespaceResolver* ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0474CF20, XmlNumeric2Converter_ChangeType_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02255DB0, app::Object*, ChangeType_3, (app::XmlNumeric2Converter * this_ptr, app::Object* value, app::Type* destination_type, app::IXmlNamespaceResolver* ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x047446D8, XmlNumeric2Converter_ChangeType_2__MethodInfo)
} // namespace app::classes::System::Xml::Schema::XmlNumeric2Converter
