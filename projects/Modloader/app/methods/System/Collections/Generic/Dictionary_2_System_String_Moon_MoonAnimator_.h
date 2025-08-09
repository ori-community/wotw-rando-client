#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_Moon_MoonAnimator_.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_Moon_MoonAnimator_ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_String_Moon_MoonAnimator_* this_ptr,
        app::String* key,
        app::MoonAnimator** value
    )
}
