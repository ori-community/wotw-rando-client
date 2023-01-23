#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Moon_ScalableAnimationPlayer_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_ScalableAnimationPlayer_.h>
#include <Modloader/app/structs/ScalableAnimationPlayer.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_ScalableAnimationPlayer_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_ScalableAnimationPlayer_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_ScalableAnimationPlayer_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474A628, List_1_Moon_ScalableAnimationPlayer__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_ScalableAnimationPlayer_, GetEnumerator, (app::List_1_Moon_ScalableAnimationPlayer_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755180, List_1_Moon_ScalableAnimationPlayer__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_ScalableAnimationPlayer_ * this_ptr, app::ScalableAnimationPlayer* item))
    IL2CPP_REGISTER_METHODINFO(0x04789928, List_1_Moon_ScalableAnimationPlayer__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_ScalableAnimationPlayer_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047870C8, List_1_Moon_ScalableAnimationPlayer___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_Moon_ScalableAnimationPlayer_ * this_ptr, app::IEnumerable_1_Moon_ScalableAnimationPlayer_* collection))
    IL2CPP_REGISTER_METHODINFO(0x04723658, List_1_Moon_ScalableAnimationPlayer__AddRange__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_ScalableAnimationPlayer_
