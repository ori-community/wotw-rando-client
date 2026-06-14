#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Predicate_1_UnityEngine_GameObject_.h>

namespace app::classes::System::Collections::Generic::HashSet_1_UnityEngine_GameObject_ {
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, app::HashSet_1_UnityEngine_GameObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, app::HashSet_1_UnityEngine_GameObject_* this_ptr, app::GameObject* item)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::HashSet_1_UnityEngine_GameObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ABCD80, app::HashSet_1_T_Enumerator_UnityEngine_GameObject_, GetEnumerator, app::HashSet_1_UnityEngine_GameObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ABF9A0, int32_t, RemoveWhere, app::HashSet_1_UnityEngine_GameObject_* this_ptr, app::Predicate_1_UnityEngine_GameObject_* match)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, app::HashSet_1_UnityEngine_GameObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ABEAC0, bool, Contains, app::HashSet_1_UnityEngine_GameObject_* this_ptr, app::GameObject* item)
} // namespace app::classes::System::Collections::Generic::HashSet_1_UnityEngine_GameObject_
