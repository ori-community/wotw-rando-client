#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Ucs4Encoding1234.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::System::Xml::Ucs4Encoding1234 {
    IL2CPP_REGISTER_METHOD(0x01952AB0, void, ctor, (app::Ucs4Encoding1234 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01952C70, app::String*, get_EncodingName, (app::Ucs4Encoding1234 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01952CF0, app::Byte__Array*, GetPreamble, (app::Ucs4Encoding1234 * this_ptr))
} // namespace app::classes::System::Xml::Ucs4Encoding1234
