#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InflateCodes.h>
#include <Modloader/app/structs/InflateBlocks.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/ZlibCodec.h>

namespace app::classes::Ionic::Zlib::InflateCodes {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InflateCodes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030720D0, void, Init, (app::InflateCodes * this_ptr, int32_t bl, int32_t bd, app::Int32__Array* tl, int32_t tl_index, app::Int32__Array* td, int32_t td_index))
    IL2CPP_REGISTER_METHOD(0x03072100, int32_t, Process, (app::InflateCodes * this_ptr, app::InflateBlocks* blocks, int32_t r))
    IL2CPP_REGISTER_METHOD(0x03073590, int32_t, InflateFast, (app::InflateCodes * this_ptr, int32_t bl, int32_t bd, app::Int32__Array* tl, int32_t tl_index, app::Int32__Array* td, int32_t td_index, app::InflateBlocks* s, app::ZlibCodec* z))
} // namespace app::classes::Ionic::Zlib::InflateCodes
