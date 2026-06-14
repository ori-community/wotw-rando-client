#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_UnityEngine_Transform_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Transform_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_UnityEngine_Transform_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Transform*, get_Item, app::List_1_UnityEngine_Transform_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_UnityEngine_Transform_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_UnityEngine_Transform_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_UnityEngine_Transform_* this_ptr, app::Transform* item)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_UnityEngine_Transform_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, app::List_1_UnityEngine_Transform_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_UnityEngine_Transform_, GetEnumerator, app::List_1_UnityEngine_Transform_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, app::List_1_UnityEngine_Transform_* this_ptr, app::Comparison_1_UnityEngine_Transform_* comparison)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, app::List_1_UnityEngine_Transform_* this_ptr, app::IEnumerable_1_UnityEngine_Transform_* collection)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, app::List_1_UnityEngine_Transform_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_UnityEngine_Transform_* this_ptr, app::Transform* item)
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, app::List_1_UnityEngine_Transform_* this_ptr, int32_t index, app::Transform* value)
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Transform_
