#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Base64Encoder.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::System::Xml::Base64Encoder {
    IL2CPP_REGISTER_METHOD(0x021E1290, void, ctor, app::Base64Encoder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021E1320, void, Encode, app::Base64Encoder* this_ptr, app::Byte__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x021E16E0, void, Flush, app::Base64Encoder* this_ptr)
} // namespace app::classes::System::Xml::Base64Encoder
