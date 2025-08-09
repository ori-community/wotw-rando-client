#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Predicate_1_UnityEngine_GameObject_.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_GameObject_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_1, app::List_1_UnityEngine_GameObject_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::GameObject__Array*, ToArray, app::List_1_UnityEngine_GameObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, app::List_1_UnityEngine_GameObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, app::List_1_UnityEngine_GameObject_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_UnityEngine_GameObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::GameObject*, get_Item, app::List_1_UnityEngine_GameObject_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_UnityEngine_GameObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_UnityEngine_GameObject_* this_ptr, app::GameObject* item)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_UnityEngine_GameObject_* this_ptr, app::GameObject* item)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, app::List_1_UnityEngine_GameObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_UnityEngine_GameObject_* this_ptr, app::GameObject* item)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_UnityEngine_GameObject_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor_3, app::List_1_UnityEngine_GameObject_* this_ptr, app::IEnumerable_1_UnityEngine_GameObject_* collection)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_UnityEngine_GameObject_, GetEnumerator, app::List_1_UnityEngine_GameObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, app::List_1_UnityEngine_GameObject_* this_ptr, int32_t index, app::GameObject* value)
    IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, app::List_1_UnityEngine_GameObject_* this_ptr, app::Predicate_1_UnityEngine_GameObject_* match)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, app::List_1_UnityEngine_GameObject_* this_ptr, app::IEnumerable_1_UnityEngine_GameObject_* collection)
    IL2CPP_REGISTER_METHOD(0x02FE9040, void, ForEach, app::List_1_UnityEngine_GameObject_* this_ptr, app::Action_1_UnityEngine_GameObject_* action)
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, app::List_1_UnityEngine_GameObject_* this_ptr, app::GameObject* item)
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_GameObject_
