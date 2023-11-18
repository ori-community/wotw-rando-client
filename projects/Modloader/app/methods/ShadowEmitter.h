#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/ShadowEmitter.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::ShadowEmitter {
    IL2CPP_REGISTER_METHOD(0x005A93B0, app::Transform*, get_GroundAnchorSafe, (app::ShadowEmitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A9500, app::Transform*, get_PerspectiveAnchorSafe, (app::ShadowEmitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A9650, app::Ray, get_CastRay, (app::ShadowEmitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A9960, float, get_GroundDistance, (app::ShadowEmitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A9B10, float, get_NormalizedGroundDistance, (app::ShadowEmitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A9BF0, bool, ValidateUpdate, (app::ShadowEmitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A9CE0, void, Awake, (app::ShadowEmitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A9DE0, void, OnEnable, (app::ShadowEmitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A9E50, void, CacheGraphics, (app::ShadowEmitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A9EF0, void, Update, (app::ShadowEmitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A9F30, void, UpdateGraphics, (app::ShadowEmitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AA380, void, UpdateAnchors, (app::ShadowEmitter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AA910, void, ComputeGroundAnchor, (app::ShadowEmitter * this_ptr, app::Vector3* position, app::Vector3* normal))
    IL2CPP_REGISTER_METHOD(0x005AAC50, void, ctor, (app::ShadowEmitter * this_ptr))
} // namespace app::classes::ShadowEmitter
