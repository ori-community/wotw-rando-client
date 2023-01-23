#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_DofAnimator_System_Single_.h>
#include <Modloader/app/structs/DofAnimator.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_DofAnimator_System_Single_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_DofAnimator_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02BBBD40, void, set_Item, (app::Dictionary_2_DofAnimator_System_Single_ * this_ptr, app::DofAnimator* key, float value))
    IL2CPP_REGISTER_METHODINFO(0x04748350, Dictionary_2_DofAnimator_System_Single__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E7A6F0, bool, Remove, (app::Dictionary_2_DofAnimator_System_Single_ * this_ptr, app::DofAnimator* key))
    IL2CPP_REGISTER_METHODINFO(0x04710650, Dictionary_2_DofAnimator_System_Single__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_DofAnimator_System_Single_, GetEnumerator, (app::Dictionary_2_DofAnimator_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476BA28, Dictionary_2_DofAnimator_System_Single__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_DofAnimator_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752588, Dictionary_2_DofAnimator_System_Single___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_DofAnimator_System_Single_
