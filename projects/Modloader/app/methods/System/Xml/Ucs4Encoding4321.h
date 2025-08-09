#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Ucs4Encoding4321.h>

namespace app::classes::System::Xml::Ucs4Encoding4321 {
    IL2CPP_REGISTER_METHOD(0x019533B0, void, ctor, app::Ucs4Encoding4321* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01953570, app::String*, get_EncodingName, app::Ucs4Encoding4321* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019535F0, app::Byte__Array*, GetPreamble, app::Ucs4Encoding4321* this_ptr)
} // namespace app::classes::System::Xml::Ucs4Encoding4321
