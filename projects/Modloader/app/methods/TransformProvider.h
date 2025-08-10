#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TransformProvider.h>

namespace app::classes::TransformProvider {
    IL2CPP_REGISTER_METHOD(0x031189D0, app::Transform*, GetTransform, app::TransformProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TransformProvider* this_ptr)
} // namespace app::classes::TransformProvider
