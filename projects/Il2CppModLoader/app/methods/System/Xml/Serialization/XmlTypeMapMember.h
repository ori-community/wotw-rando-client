#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Serialization::XmlTypeMapMember {
    IL2CPP_REGISTER_METHOD(0x0194D4F0, void, ctor, (app::XmlTypeMapMember * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::XmlTypeMapMember * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (app::XmlTypeMapMember * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Object*, get_DefaultValue, (app::XmlTypeMapMember * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_DefaultValue, (app::XmlTypeMapMember * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0194D5A0, bool, IsReadOnly, (app::XmlTypeMapMember * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x0194D780, app::Object*, GetValue_1, (app::Object * ob, app::String* name))
    IL2CPP_REGISTER_METHOD(0x0194DA20, app::Object*, GetValue_2, (app::XmlTypeMapMember * this_ptr, app::Object* ob))
    IL2CPP_REGISTER_METHOD(0x0194DCE0, void, SetValue_1, (app::XmlTypeMapMember * this_ptr, app::Object* ob, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0194DFF0, void, SetValue_2, (app::Object * ob, app::String* name, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0194E2B0, void, InitMember, (app::XmlTypeMapMember * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::TypeData*, get_TypeData, (app::XmlTypeMapMember * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_TypeData, (app::XmlTypeMapMember * this_ptr, app::TypeData* value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Index, (app::XmlTypeMapMember * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Index, (app::XmlTypeMapMember * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_GlobalIndex, (app::XmlTypeMapMember * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A020, void, set_GlobalIndex, (app::XmlTypeMapMember * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01760C10, bool, get_IsOptionalValueType, (app::XmlTypeMapMember * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0194E5F0, void, set_IsOptionalValueType, (app::XmlTypeMapMember * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0194E610, bool, get_IsReturnValue, (app::XmlTypeMapMember * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0194E620, void, set_IsReturnValue, (app::XmlTypeMapMember * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0194E640, void, CheckOptionalValueType, (app::XmlTypeMapMember * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x0194E720, bool, GetValueSpecified, (app::XmlTypeMapMember * this_ptr, app::Object* ob))
    IL2CPP_REGISTER_METHOD(0x0194EA50, void, SetValueSpecified, (app::XmlTypeMapMember * this_ptr, app::Object* ob, bool value))
} // namespace app::classes::System::Xml::Serialization::XmlTypeMapMember
