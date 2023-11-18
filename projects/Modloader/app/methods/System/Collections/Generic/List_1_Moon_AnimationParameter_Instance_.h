#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationParameter_Instance.h>
#include <Modloader/app/structs/List_1_Moon_AnimationParameter_Instance_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_AnimationParameter_Instance_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::AnimationParameter_Instance*, get_Item, (app::List_1_Moon_AnimationParameter_Instance_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_AnimationParameter_Instance_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_AnimationParameter_Instance_ * this_ptr, app::AnimationParameter_Instance* item))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_AnimationParameter_Instance_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_AnimationParameter_Instance_
