#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_PetrifiedFog_.h>
#include <Modloader/app/structs/PetrifiedFog.h>

namespace app::classes::System::Collections::Generic::List_1_PetrifiedFog_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_PetrifiedFog_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474CEE8, List_1_PetrifiedFog___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_PetrifiedFog_ * this_ptr, app::PetrifiedFog* item))
    IL2CPP_REGISTER_METHODINFO(0x0470E450, List_1_PetrifiedFog__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_PetrifiedFog_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473C530, List_1_PetrifiedFog__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::PetrifiedFog*, get_Item, (app::List_1_PetrifiedFog_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04747678, List_1_PetrifiedFog__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_PetrifiedFog_ * this_ptr, app::PetrifiedFog* item))
    IL2CPP_REGISTER_METHODINFO(0x04737860, List_1_PetrifiedFog__Remove__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_PetrifiedFog_
