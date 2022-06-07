#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::TernaryTreeReadOnly {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::TernaryTreeReadOnly * this_ptr, app::Byte__Array * node_buffer))
    IL2CPP_REGISTER_METHOD(0x01950650, uint8_t, FindCaseInsensitiveString, (app::TernaryTreeReadOnly * this_ptr, app::String * string_to_find))
}
