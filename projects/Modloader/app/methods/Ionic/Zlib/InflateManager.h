#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InflateManager.h>
#include <Modloader/app/structs/FlushType__Enum.h>
#include <Modloader/app/structs/ZlibCodec.h>

namespace app::classes::Ionic::Zlib::InflateManager {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_HandleRfc1950HeaderBytes, (app::InflateManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, ctor, (app::InflateManager * this_ptr, bool expect_rfc1950_header_bytes))
    IL2CPP_REGISTER_METHOD(0x03074230, int32_t, Reset, (app::InflateManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03074290, int32_t, End, (app::InflateManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030742E0, int32_t, Initialize, (app::InflateManager * this_ptr, app::ZlibCodec* codec, int32_t w))
    IL2CPP_REGISTER_METHOD(0x03074530, int32_t, Inflate, (app::InflateManager * this_ptr, app::FlushType__Enum flush))
    IL2CPP_REGISTER_METHOD(0x03075000, void, cctor, ())
} // namespace app::classes::Ionic::Zlib::InflateManager
