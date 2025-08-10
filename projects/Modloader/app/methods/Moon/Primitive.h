#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Primitive.h>
#include <Modloader/app/structs/PrimitiveSpace__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::Primitive {
    IL2CPP_REGISTER_METHOD(
        0x00C3EAA0,
        app::Vector3,
        TransformPosition,
        app::Vector3 position,
        app::PrimitiveSpace__Enum source_space,
        app::PrimitiveSpace__Enum target_space,
        app::Transform* local_toworld,
        app::Transform* root
    )
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::PrimitiveSpace__Enum, get_Space, app::Primitive* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FC6E0,
        void,
        SetSpace,
        app::Primitive* this_ptr,
        app::PrimitiveSpace__Enum target_space,
        app::Transform* local_toworld,
        app::Transform* root
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Primitive* this_ptr)
} // namespace app::classes::Moon::Primitive
