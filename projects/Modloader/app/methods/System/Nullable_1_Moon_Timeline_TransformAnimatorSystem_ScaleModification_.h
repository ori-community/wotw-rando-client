#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification_.h>
#include <Modloader/app/structs/Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TransformAnimatorSystem_ScaleModification.h>

namespace app::classes::System::Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification_ {
    IL2CPP_REGISTER_METHOD(0x001F6D10, bool, get_HasValue, app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001EB610,
        void,
        ctor,
        app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___Boxed* this_ptr,
        app::TransformAnimatorSystem_ScaleModification value
    )
    IL2CPP_REGISTER_METHOD(
        0x001F6D20,
        app::TransformAnimatorSystem_ScaleModification,
        get_Value,
        app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001F6FC0,
        app::TransformAnimatorSystem_ScaleModification,
        GetValueOrDefault_1,
        app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001F6E20,
        bool,
        Equals_1,
        app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___Boxed* this_ptr,
        app::Object* other
    )
    IL2CPP_REGISTER_METHOD(
        0x001F6E80,
        bool,
        Equals_2,
        app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___Boxed* this_ptr,
        app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification_ other
    )
    IL2CPP_REGISTER_METHOD(0x001F6EF0, int32_t, GetHashCode, app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001F6FE0,
        app::TransformAnimatorSystem_ScaleModification,
        GetValueOrDefault_2,
        app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___Boxed* this_ptr,
        app::TransformAnimatorSystem_ScaleModification default_value
    )
    IL2CPP_REGISTER_METHOD(0x001F7020, app::String*, ToString, app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025502C0, app::Object*, Box, app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification_ o)
    IL2CPP_REGISTER_METHOD(0x02550350, app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_Moon_Timeline_TransformAnimatorSystem_ScaleModification_
