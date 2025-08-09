#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_.h>
#include <Modloader/app/structs/SeinHold_ThrowAnimationSet.h>
#include <Modloader/app/structs/ThrowAnimationType__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_ {
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_* this_ptr,
        app::ThrowAnimationType__Enum key,
        app::SeinHold_ThrowAnimationSet* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02C35530,
        app::SeinHold_ThrowAnimationSet*,
        get_Item,
        app::Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_* this_ptr,
        app::ThrowAnimationType__Enum key
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_ThrowAnimationType_SeinHold_ThrowAnimationSet_
