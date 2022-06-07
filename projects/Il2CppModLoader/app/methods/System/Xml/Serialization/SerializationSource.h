#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Serialization::SerializationSource {
    IL2CPP_REGISTER_METHOD(0x01C90210, void, ctor, (app::SerializationSource * this_ptr, app::String * namspace, app::Type__Array * included_types))
    IL2CPP_REGISTER_METHOD(0x01C90220, bool, BaseEquals, (app::SerializationSource * this_ptr, app::SerializationSource * other))
}
