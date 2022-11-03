#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LayeredRender::LayeredSkinnedMesh {
    IL2CPP_REGISTER_METHOD(0x00F25830, void, Awake, (app::LayeredSkinnedMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F25940, void, OnDestroy, (app::LayeredSkinnedMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F259C0, void, OnEnable, (app::LayeredSkinnedMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F25A60, void, Update, (app::LayeredSkinnedMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LayeredSkinnedMesh * this_ptr))
} // namespace app::classes::LayeredRender::LayeredSkinnedMesh
