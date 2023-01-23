#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HashSet_1_DeathWisp_.h>
#include <Modloader/app/structs/IEnumerable_1_DeathWisp_.h>
#include <Modloader/app/structs/DeathWisp.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_DeathWisp_.h>

namespace app::classes::System::Collections::Generic::HashSet_1_DeathWisp_ {
    IL2CPP_REGISTER_METHOD(0x02ABF4D0, void, UnionWith, (app::HashSet_1_DeathWisp_ * this_ptr, app::IEnumerable_1_DeathWisp_* other))
    IL2CPP_REGISTER_METHODINFO(0x04747208, HashSet_1_DeathWisp__UnionWith__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ABEC50, bool, Remove, (app::HashSet_1_DeathWisp_ * this_ptr, app::DeathWisp* item))
    IL2CPP_REGISTER_METHODINFO(0x04762710, HashSet_1_DeathWisp__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ABCD80, app::HashSet_1_T_Enumerator_DeathWisp_, GetEnumerator, (app::HashSet_1_DeathWisp_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04781590, HashSet_1_DeathWisp__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (app::HashSet_1_DeathWisp_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475D8C8, HashSet_1_DeathWisp__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, (app::HashSet_1_DeathWisp_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744298, HashSet_1_DeathWisp___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::HashSet_1_DeathWisp_
