#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/List_1_T_Enumerator_UnityEngine_Collider_.h>
#include <Modloader/app/structs/Predicate_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_Collider_.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Collider_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_UnityEngine_Collider_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755E88, List_1_UnityEngine_Collider___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_UnityEngine_Collider_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04772F30, List_1_UnityEngine_Collider__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_UnityEngine_Collider_ * this_ptr, app::Collider* item))
    IL2CPP_REGISTER_METHODINFO(0x04760DE8, List_1_UnityEngine_Collider__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_UnityEngine_Collider_, GetEnumerator, (app::List_1_UnityEngine_Collider_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478A8A8, List_1_UnityEngine_Collider__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_UnityEngine_Collider_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0471F690, List_1_UnityEngine_Collider___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_UnityEngine_Collider_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04773BC8, List_1_UnityEngine_Collider__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Collider*, get_Item, (app::List_1_UnityEngine_Collider_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047689F8, List_1_UnityEngine_Collider__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_UnityEngine_Collider_ * this_ptr, app::Collider* item))
    IL2CPP_REGISTER_METHODINFO(0x0474C490, List_1_UnityEngine_Collider__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_UnityEngine_Collider_ * this_ptr, app::Collider* item))
    IL2CPP_REGISTER_METHODINFO(0x04770E28, List_1_UnityEngine_Collider__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_UnityEngine_Collider_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0477EF98, List_1_UnityEngine_Collider__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, (app::List_1_UnityEngine_Collider_ * this_ptr, app::Predicate_1_UnityEngine_Collider_* match))
    IL2CPP_REGISTER_METHODINFO(0x0475CDA8, List_1_UnityEngine_Collider__RemoveAll__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_UnityEngine_Collider_ * this_ptr, app::IEnumerable_1_UnityEngine_Collider_* collection))
    IL2CPP_REGISTER_METHODINFO(0x0478B1C8, List_1_UnityEngine_Collider__AddRange__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Collider_
