#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup {
    IL2CPP_REGISTER_METHOD(0x0199E410, void, ctor, (app::XmlSerializationReader_CollectionItemFixup * this_ptr, app::Array * list, int32_t index, app::String * id))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Array *, get_Collection, (app::XmlSerializationReader_CollectionItemFixup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Index, (app::XmlSerializationReader_CollectionItemFixup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_Id, (app::XmlSerializationReader_CollectionItemFixup * this_ptr))
}
