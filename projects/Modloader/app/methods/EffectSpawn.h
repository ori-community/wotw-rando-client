#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EffectSpawn__Boxed.h>
#include <Modloader/app/structs/EffectTransformType__Enum.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::EffectSpawn {
    IL2CPP_REGISTER_METHOD(
        0x0011D240,
        void,
        ctor,
        app::EffectSpawn__Boxed* this_ptr,
        app::GameObject* effect,
        app::GameObject* secondary_effect,
        app::EffectTransformType__Enum transformation,
        bool align_effect,
        app::EffectTransformType__Enum secondary_transform_type,
        bool secondary_optional
    )
}
