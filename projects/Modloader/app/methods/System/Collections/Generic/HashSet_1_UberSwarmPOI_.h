#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HashSet_1_UberSwarmPOI_.h>
#include <Modloader/app/structs/UberSwarmPOI.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_UberSwarmPOI_.h>

namespace app::classes::System::Collections::Generic::HashSet_1_UberSwarmPOI_ {
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (app::HashSet_1_UberSwarmPOI_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474D4F0, HashSet_1_UberSwarmPOI__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_UberSwarmPOI_ * this_ptr, app::UberSwarmPOI* item))
    IL2CPP_REGISTER_METHODINFO(0x0470CED8, HashSet_1_UberSwarmPOI__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ABEC50, bool, Remove, (app::HashSet_1_UberSwarmPOI_ * this_ptr, app::UberSwarmPOI* item))
    IL2CPP_REGISTER_METHODINFO(0x047538C0, HashSet_1_UberSwarmPOI__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ABCD80, app::HashSet_1_T_Enumerator_UberSwarmPOI_, GetEnumerator, (app::HashSet_1_UberSwarmPOI_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04743388, HashSet_1_UberSwarmPOI__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, (app::HashSet_1_UberSwarmPOI_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04727C30, HashSet_1_UberSwarmPOI___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::HashSet_1_UberSwarmPOI_
