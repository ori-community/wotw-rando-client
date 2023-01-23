#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/List_1_T_Enumerator_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Transform_.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Transform_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_UnityEngine_Transform_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E468, List_1_UnityEngine_Transform__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Transform*, get_Item, (app::List_1_UnityEngine_Transform_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04779900, List_1_UnityEngine_Transform__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_UnityEngine_Transform_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0472D998, List_1_UnityEngine_Transform__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_UnityEngine_Transform_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047118D0, List_1_UnityEngine_Transform___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_UnityEngine_Transform_ * this_ptr, app::Transform* item))
    IL2CPP_REGISTER_METHODINFO(0x047083E0, List_1_UnityEngine_Transform__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_UnityEngine_Transform_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477F010, List_1_UnityEngine_Transform__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_UnityEngine_Transform_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0478EF10, List_1_UnityEngine_Transform___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_UnityEngine_Transform_, GetEnumerator, (app::List_1_UnityEngine_Transform_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04753D68, List_1_UnityEngine_Transform__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_UnityEngine_Transform_ * this_ptr, app::Comparison_1_UnityEngine_Transform_* comparison))
    IL2CPP_REGISTER_METHODINFO(0x0477B930, List_1_UnityEngine_Transform__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_UnityEngine_Transform_ * this_ptr, app::IEnumerable_1_UnityEngine_Transform_* collection))
    IL2CPP_REGISTER_METHODINFO(0x04772508, List_1_UnityEngine_Transform__AddRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAC80, void, Reverse, (app::List_1_UnityEngine_Transform_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755CE8, List_1_UnityEngine_Transform__Reverse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_UnityEngine_Transform_ * this_ptr, app::Transform* item))
    IL2CPP_REGISTER_METHODINFO(0x0471F358, List_1_UnityEngine_Transform__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, (app::List_1_UnityEngine_Transform_ * this_ptr, int32_t index, app::Transform* value))
    IL2CPP_REGISTER_METHODINFO(0x047183E8, List_1_UnityEngine_Transform__set_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Transform_
