#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Serialization::XmlSerializationReader_Fixup {
    IL2CPP_REGISTER_METHOD(0x025B2FF0, void, ctor, (app::XmlSerializationReader_Fixup * this_ptr, app::Object* o, app::XmlSerializationFixupCallback* callback, int32_t count))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::XmlSerializationFixupCallback*, get_Callback, (app::XmlSerializationReader_Fixup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String__Array*, get_Ids, (app::XmlSerializationReader_Fixup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_Source, (app::XmlSerializationReader_Fixup * this_ptr))
} // namespace app::classes::System::Xml::Serialization::XmlSerializationReader_Fixup
