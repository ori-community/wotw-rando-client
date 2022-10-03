#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Serialization::XmlRootAttribute {
    IL2CPP_REGISTER_METHOD(0x00447ED0, void, ctor_1, (app::XmlRootAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025AB880, void, ctor_2, (app::XmlRootAttribute * this_ptr, app::String* element_name))
    IL2CPP_REGISTER_METHOD(0x025AB890, app::String*, get_DataType, (app::XmlRootAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_DataType, (app::XmlRootAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x025AB920, app::String*, get_ElementName, (app::XmlRootAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_ElementName, (app::XmlRootAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsNullable, (app::XmlRootAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IsNullable, (app::XmlRootAttribute * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Namespace, (app::XmlRootAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Namespace, (app::XmlRootAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x025AB9B0, void, AddKeyHash, (app::XmlRootAttribute * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Xml::Serialization::XmlRootAttribute
