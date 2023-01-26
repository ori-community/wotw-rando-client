#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/List_1_Moon_FloatAnimationParameter_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_FloatAnimationParameter_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_FloatAnimationParameter_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::FloatAnimationParameter*, get_Item, (app::List_1_Moon_FloatAnimationParameter_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_FloatAnimationParameter_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_FloatAnimationParameter_, GetEnumerator, (app::List_1_Moon_FloatAnimationParameter_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_FloatAnimationParameter_
