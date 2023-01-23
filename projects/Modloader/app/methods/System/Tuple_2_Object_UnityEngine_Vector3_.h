#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Tuple_2_Object_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/IEqualityComparer.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::System::Tuple_2_Object_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_Item1, (app::Tuple_2_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064EB90, app::Vector3, get_Item2, (app::Tuple_2_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A68AC0, void, ctor, (app::Tuple_2_Object_UnityEngine_Vector3_ * this_ptr, app::Object* item1, app::Vector3 item2))
    IL2CPP_REGISTER_METHOD(0x02A68AF0, bool, Equals, (app::Tuple_2_Object_UnityEngine_Vector3_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A68BD0, bool, IStructuralEquatable_Equals, (app::Tuple_2_Object_UnityEngine_Vector3_ * this_ptr, app::Object* other, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A68D80, int32_t, IComparable_CompareTo, (app::Tuple_2_Object_UnityEngine_Vector3_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02A68E60, int32_t, IStructuralComparable_CompareTo, (app::Tuple_2_Object_UnityEngine_Vector3_ * this_ptr, app::Object* other, app::IComparer* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047915D8, Tuple_2_Object_UnityEngine_Vector3__System_Collections_IStructuralComparable_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A69090, int32_t, GetHashCode, (app::Tuple_2_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A69160, int32_t, IStructuralEquatable_GetHashCode, (app::Tuple_2_Object_UnityEngine_Vector3_ * this_ptr, app::IEqualityComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02A69280, app::String*, ToString, (app::Tuple_2_Object_UnityEngine_Vector3_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A69400, app::String*, ITupleInternal_ToString, (app::Tuple_2_Object_UnityEngine_Vector3_ * this_ptr, app::StringBuilder* sb))
} // namespace app::classes::System::Tuple_2_Object_UnityEngine_Vector3_
