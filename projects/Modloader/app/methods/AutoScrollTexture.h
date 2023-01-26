#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AutoScrollTexture.h>

namespace app::classes::AutoScrollTexture {
    IL2CPP_REGISTER_METHOD(0x0085DDA0, void, Awake, (app::AutoScrollTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085DF00, bool, get_CanScroll, (app::AutoScrollTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085DFE0, void, FixedUpdate, (app::AutoScrollTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085E270, bool, get_IsSuspended, (app::AutoScrollTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085E280, void, set_IsSuspended, (app::AutoScrollTexture * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0085E290, void, ctor, (app::AutoScrollTexture * this_ptr))
} // namespace app::classes::AutoScrollTexture
