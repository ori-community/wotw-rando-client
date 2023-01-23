#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HashSet_1_BaseAnimator_.h>
#include <Modloader/app/structs/BaseAnimator.h>

namespace app::classes::System::Collections::Generic::HashSet_1_BaseAnimator_ {
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (app::HashSet_1_BaseAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755768, HashSet_1_BaseAnimator__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_BaseAnimator_ * this_ptr, app::BaseAnimator* item))
    IL2CPP_REGISTER_METHODINFO(0x04774838, HashSet_1_BaseAnimator__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ABEAC0, bool, Contains, (app::HashSet_1_BaseAnimator_ * this_ptr, app::BaseAnimator* item))
    IL2CPP_REGISTER_METHODINFO(0x0475D4A0, HashSet_1_BaseAnimator__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ABEC50, bool, Remove, (app::HashSet_1_BaseAnimator_ * this_ptr, app::BaseAnimator* item))
    IL2CPP_REGISTER_METHODINFO(0x047797B8, HashSet_1_BaseAnimator__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, (app::HashSet_1_BaseAnimator_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04779008, HashSet_1_BaseAnimator___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::HashSet_1_BaseAnimator_
