#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonFlagsSystem_HiddenFlagModification.h>
#include <Modloader/app/structs/Nullable_1_MoonFlagsSystem_HiddenFlagModification_.h>
#include <Modloader/app/structs/Nullable_1_MoonFlagsSystem_HiddenFlagModification___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_MoonFlagsSystem_HiddenFlagModification_ {
    IL2CPP_REGISTER_METHOD(0x001F7750, bool, get_HasValue, app::Nullable_1_MoonFlagsSystem_HiddenFlagModification___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0010DB70,
        void,
        ctor,
        app::Nullable_1_MoonFlagsSystem_HiddenFlagModification___Boxed* this_ptr,
        app::MoonFlagsSystem_HiddenFlagModification value
    )
    IL2CPP_REGISTER_METHOD(
        0x001F7760,
        app::MoonFlagsSystem_HiddenFlagModification,
        get_Value,
        app::Nullable_1_MoonFlagsSystem_HiddenFlagModification___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0010E100,
        app::MoonFlagsSystem_HiddenFlagModification,
        GetValueOrDefault_1,
        app::Nullable_1_MoonFlagsSystem_HiddenFlagModification___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x001F7840, bool, Equals_1, app::Nullable_1_MoonFlagsSystem_HiddenFlagModification___Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(
        0x001F7890,
        bool,
        Equals_2,
        app::Nullable_1_MoonFlagsSystem_HiddenFlagModification___Boxed* this_ptr,
        app::Nullable_1_MoonFlagsSystem_HiddenFlagModification_ other
    )
    IL2CPP_REGISTER_METHOD(0x001F79B0, int32_t, GetHashCode, app::Nullable_1_MoonFlagsSystem_HiddenFlagModification___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001F7A70,
        app::MoonFlagsSystem_HiddenFlagModification,
        GetValueOrDefault_2,
        app::Nullable_1_MoonFlagsSystem_HiddenFlagModification___Boxed* this_ptr,
        app::MoonFlagsSystem_HiddenFlagModification default_value
    )
    IL2CPP_REGISTER_METHOD(0x001F7A90, app::String*, ToString, app::Nullable_1_MoonFlagsSystem_HiddenFlagModification___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02550A60, app::Object*, Box, app::Nullable_1_MoonFlagsSystem_HiddenFlagModification_ o)
    IL2CPP_REGISTER_METHOD(0x02550AD0, app::Nullable_1_MoonFlagsSystem_HiddenFlagModification_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_MoonFlagsSystem_HiddenFlagModification_
