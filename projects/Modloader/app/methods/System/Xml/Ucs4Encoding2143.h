#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Ucs4Encoding2143.h>

namespace app::classes::System::Xml::Ucs4Encoding2143 {
    IL2CPP_REGISTER_METHOD(0x01952DB0, void, ctor, app::Ucs4Encoding2143* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01952F70, app::String*, get_EncodingName, app::Ucs4Encoding2143* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01952FF0, app::Byte__Array*, GetPreamble, app::Ucs4Encoding2143* this_ptr)
} // namespace app::classes::System::Xml::Ucs4Encoding2143
