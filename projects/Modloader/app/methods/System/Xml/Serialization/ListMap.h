#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Serialization::ListMap {
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_ChoiceMember, (app::ListMap * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XmlTypeMapElementInfoList*, get_ItemInfo, (app::ListMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ItemInfo, (app::ListMap * this_ptr, app::XmlTypeMapElementInfoList* value))
    IL2CPP_REGISTER_METHOD(0x01C8E780, app::XmlTypeMapElementInfo*, FindElement_1, (app::ListMap * this_ptr, app::Object* ob, int32_t index, app::Object* member_value))
    IL2CPP_REGISTER_METHODINFO(0x047579B8, ListMap_FindElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01C8ED40, app::XmlTypeMapElementInfo*, FindElement_2, (app::ListMap * this_ptr, app::String* element_name, app::String* ns))
    IL2CPP_REGISTER_METHOD(0x01C8EFF0, app::XmlTypeMapElementInfo*, FindTextElement, (app::ListMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C8F210, void, GetArrayType, (app::ListMap * this_ptr, int32_t item_count, app::String** local_name, app::String** ns))
    IL2CPP_REGISTER_METHOD(0x01C8F4D0, bool, Equals, (app::ListMap * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, (app::ListMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ListMap * this_ptr))
} // namespace app::classes::System::Xml::Serialization::ListMap
