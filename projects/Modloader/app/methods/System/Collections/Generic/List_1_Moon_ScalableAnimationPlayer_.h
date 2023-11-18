#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_ScalableAnimationPlayer_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_ScalableAnimationPlayer_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_ScalableAnimationPlayer_.h>
#include <Modloader/app/structs/ScalableAnimationPlayer.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_ScalableAnimationPlayer_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_ScalableAnimationPlayer_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_ScalableAnimationPlayer_, GetEnumerator, (app::List_1_Moon_ScalableAnimationPlayer_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_ScalableAnimationPlayer_ * this_ptr, app::ScalableAnimationPlayer* item))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_ScalableAnimationPlayer_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_Moon_ScalableAnimationPlayer_ * this_ptr, app::IEnumerable_1_Moon_ScalableAnimationPlayer_* collection))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_ScalableAnimationPlayer_
