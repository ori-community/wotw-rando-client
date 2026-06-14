#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_FloatAnimationParameter_System_Single_.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_FloatAnimationParameter_System_Single_ {
    IL2CPP_REGISTER_METHOD(
        0x02BCDF80,
        bool,
        TryGetValue,
        app::Dictionary_2_Moon_FloatAnimationParameter_System_Single_* this_ptr,
        app::FloatAnimationParameter* key,
        float* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBBD40,
        void,
        set_Item,
        app::Dictionary_2_Moon_FloatAnimationParameter_System_Single_* this_ptr,
        app::FloatAnimationParameter* key,
        float value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_Moon_FloatAnimationParameter_System_Single_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_FloatAnimationParameter_System_Single_
