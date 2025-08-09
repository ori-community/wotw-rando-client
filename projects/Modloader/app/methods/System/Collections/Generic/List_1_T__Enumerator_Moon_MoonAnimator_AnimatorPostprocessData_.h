#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_MoonAnimator_AnimatorPostprocessData_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_MoonAnimator_AnimatorPostprocessData___Boxed.h>
#include <Modloader/app/structs/MoonAnimator_AnimatorPostprocessData.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_Moon_MoonAnimator_AnimatorPostprocessData_ {
    IL2CPP_REGISTER_METHOD(
        0x00152840,
        void,
        ctor,
        app::List_1_T_Enumerator_Moon_MoonAnimator_AnimatorPostprocessData___Boxed* this_ptr,
        app::List_1_Moon_MoonAnimator_AnimatorPostprocessData_* list
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_Moon_MoonAnimator_AnimatorPostprocessData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00152880, bool, MoveNext, app::List_1_T_Enumerator_Moon_MoonAnimator_AnimatorPostprocessData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00152970, bool, MoveNextRare, app::List_1_T_Enumerator_Moon_MoonAnimator_AnimatorPostprocessData___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001354E0,
        app::MoonAnimator_AnimatorPostprocessData,
        get_Current,
        app::List_1_T_Enumerator_Moon_MoonAnimator_AnimatorPostprocessData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x001529D0,
        app::Object*,
        IEnumerator_get_Current,
        app::List_1_T_Enumerator_Moon_MoonAnimator_AnimatorPostprocessData___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00152AA0, void, IEnumerator_Reset, app::List_1_T_Enumerator_Moon_MoonAnimator_AnimatorPostprocessData___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_Moon_MoonAnimator_AnimatorPostprocessData_
