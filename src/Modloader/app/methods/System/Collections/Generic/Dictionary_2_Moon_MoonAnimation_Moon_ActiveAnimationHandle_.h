#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_.h>
#include <Modloader/app/structs/MoonAnimation.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_* this_ptr, app::MoonAnimation* key)
    IL2CPP_REGISTER_METHOD(
        0x02DD2F40,
        app::ActiveAnimationHandle,
        get_Item,
        app::Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_* this_ptr,
        app::MoonAnimation* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BC57C0,
        void,
        set_Item,
        app::Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_* this_ptr,
        app::MoonAnimation* key,
        app::ActiveAnimationHandle value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BC5800,
        void,
        Add,
        app::Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_* this_ptr,
        app::MoonAnimation* key,
        app::ActiveAnimationHandle value
    )
    IL2CPP_REGISTER_METHOD(0x02DD4740, bool, Remove, app::Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_* this_ptr, app::MoonAnimation* key)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_
