#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification_.h>
#include <Modloader/app/structs/Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TransformAnimatorSystem_PositionModification.h>

namespace app::classes::System::Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification_ {
    IL2CPP_REGISTER_METHOD(0x001F63D0, bool, get_HasValue, app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001F63B0,
        void,
        ctor,
        app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification___Boxed* this_ptr,
        app::TransformAnimatorSystem_PositionModification value
    )
    IL2CPP_REGISTER_METHOD(
        0x001F63E0,
        app::TransformAnimatorSystem_PositionModification,
        get_Value,
        app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001F66E0,
        app::TransformAnimatorSystem_PositionModification,
        GetValueOrDefault_1,
        app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001F6500,
        bool,
        Equals_1,
        app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification___Boxed* this_ptr,
        app::Object* other
    )
    IL2CPP_REGISTER_METHOD(
        0x001F6580,
        bool,
        Equals_2,
        app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification___Boxed* this_ptr,
        app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification_ other
    )
    IL2CPP_REGISTER_METHOD(0x001F6610, int32_t, GetHashCode, app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001F6700,
        app::TransformAnimatorSystem_PositionModification,
        GetValueOrDefault_2,
        app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification___Boxed* this_ptr,
        app::TransformAnimatorSystem_PositionModification default_value
    )
    IL2CPP_REGISTER_METHOD(0x001F6750, app::String*, ToString, app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0254FCC0, app::Object*, Box, app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification_ o)
    IL2CPP_REGISTER_METHOD(0x0254FD50, app::Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_Moon_Timeline_TransformAnimatorSystem_PositionModification_
