#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::NativeSandWormTailPost {
    IL2CPP_REGISTER_METHOD(0x00887670, void, Awake, (app::NativeSandWormTailPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00887A50, void, OnEnable, (app::NativeSandWormTailPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00887B50, void, LateUpdate, (app::NativeSandWormTailPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00887CD0, void, ctor, (app::NativeSandWormTailPost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00887D60, void, cctor, ())
} // namespace app::classes::NativeSandWormTailPost
