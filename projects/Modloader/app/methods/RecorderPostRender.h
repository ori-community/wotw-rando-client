#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RecorderPostRender {
    IL2CPP_REGISTER_METHOD(0x008F99F0, void, OnPostRender, (app::RecorderPostRender * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RecorderPostRender * this_ptr))
} // namespace app::classes::RecorderPostRender
