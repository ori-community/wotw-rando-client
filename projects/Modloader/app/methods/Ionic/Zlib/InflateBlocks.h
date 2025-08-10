#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InflateBlocks.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ZlibCodec.h>

namespace app::classes::Ionic::Zlib::InflateBlocks {
    IL2CPP_REGISTER_METHOD(0x0306FF50, void, ctor, app::InflateBlocks* this_ptr, app::ZlibCodec* codec, app::Object* checkfn, int32_t w)
    IL2CPP_REGISTER_METHOD(0x030701E0, uint32_t, Reset, app::InflateBlocks* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03070330, int32_t, Process, app::InflateBlocks* this_ptr, int32_t r)
    IL2CPP_REGISTER_METHOD(0x03071DE0, void, Free, app::InflateBlocks* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03071E00, int32_t, Flush, app::InflateBlocks* this_ptr, int32_t r)
    IL2CPP_REGISTER_METHOD(0x03072020, void, cctor, )
} // namespace app::classes::Ionic::Zlib::InflateBlocks
