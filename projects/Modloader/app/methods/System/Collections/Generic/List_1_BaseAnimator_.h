#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_BaseAnimator_.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/List_1_T_Enumerator_BaseAnimator_.h>

namespace app::classes::System::Collections::Generic::List_1_BaseAnimator_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_BaseAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474C2E8, List_1_BaseAnimator__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::BaseAnimator*, get_Item, (app::List_1_BaseAnimator_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477DA08, List_1_BaseAnimator__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_BaseAnimator_ * this_ptr, app::BaseAnimator* item))
    IL2CPP_REGISTER_METHODINFO(0x04765970, List_1_BaseAnimator__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_BaseAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04757460, List_1_BaseAnimator___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_BaseAnimator_, GetEnumerator, (app::List_1_BaseAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761DA8, List_1_BaseAnimator__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_BaseAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047680B8, List_1_BaseAnimator__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_BaseAnimator_ * this_ptr, app::BaseAnimator* item))
    IL2CPP_REGISTER_METHODINFO(0x04783130, List_1_BaseAnimator__Remove__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_BaseAnimator_
