#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Bounds__Boxed.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Bounds {
    IL2CPP_REGISTER_METHOD(0x001EB560, void, ctor, (app::Bounds__Boxed * this_ptr, app::Vector3 center, app::Vector3 size))
    IL2CPP_REGISTER_METHOD(0x001EB5A0, int32_t, GetHashCode, (app::Bounds__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB5B0, bool, Equals_1, (app::Bounds__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001EB5C0, bool, Equals_2, (app::Bounds__Boxed * this_ptr, app::Bounds other))
    IL2CPP_REGISTER_METHOD(0x001EB5F0, app::Vector3, get_center, (app::Bounds__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB610, void, set_center, (app::Bounds__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x001EB620, app::Vector3, get_size, (app::Bounds__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB650, void, set_size, (app::Bounds__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x001EB680, app::Vector3, get_extents, (app::Bounds__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB6A0, void, set_extents, (app::Bounds__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x001EB6B0, app::Vector3, get_min, (app::Bounds__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB6E0, void, set_min, (app::Bounds__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x001EB740, app::Vector3, get_max, (app::Bounds__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB770, void, set_max, (app::Bounds__Boxed * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x024202F0, bool, op_Equality, (app::Bounds lhs, app::Bounds rhs))
    IL2CPP_REGISTER_METHOD(0x02420430, bool, op_Inequality, (app::Bounds lhs, app::Bounds rhs))
    IL2CPP_REGISTER_METHOD(0x001EB7D0, void, SetMinMax, (app::Bounds__Boxed * this_ptr, app::Vector3 min, app::Vector3 max))
    IL2CPP_REGISTER_METHOD(0x001EB810, void, Encapsulate_1, (app::Bounds__Boxed * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x001EB840, void, Encapsulate_2, (app::Bounds__Boxed * this_ptr, app::Bounds bounds))
    IL2CPP_REGISTER_METHOD(0x001EB870, void, Expand_1, (app::Bounds__Boxed * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x001EB880, void, Expand_2, (app::Bounds__Boxed * this_ptr, app::Vector3 amount))
    IL2CPP_REGISTER_METHOD(0x001EB8B0, bool, Intersects, (app::Bounds__Boxed * this_ptr, app::Bounds bounds))
    IL2CPP_REGISTER_METHOD(0x001EB8E0, bool, IntersectRay, (app::Bounds__Boxed * this_ptr, app::Ray ray, float* distance))
    IL2CPP_REGISTER_METHOD(0x001EB970, app::String*, ToString, (app::Bounds__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EBB10, bool, Contains, (app::Bounds__Boxed * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x001EBB80, float, SqrDistance, (app::Bounds__Boxed * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x02420E40, bool, IntersectRayAABB, (app::Ray ray, app::Bounds bounds, float* dist))
    IL2CPP_REGISTER_METHOD(0x001EBBF0, app::Vector3, ClosestPoint, (app::Bounds__Boxed * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x02420EB0, bool, Contains_Injected, (app::Bounds * _unity_self, app::Vector3* point))
    IL2CPP_REGISTER_METHOD(0x02420F10, float, SqrDistance_Injected, (app::Bounds * _unity_self, app::Vector3* point))
    IL2CPP_REGISTER_METHOD(0x02420F70, bool, IntersectRayAABB_Injected, (app::Ray * ray, app::Bounds* bounds, float* dist))
    IL2CPP_REGISTER_METHOD(0x02420FE0, void, ClosestPoint_Injected, (app::Bounds * _unity_self, app::Vector3* point, app::Vector3* ret))
    inline bool operator==(app::Bounds lhs, app::Bounds rhs) {
        return op_Equality(lhs, rhs);
    }
    inline bool operator!=(app::Bounds lhs, app::Bounds rhs) {
        return op_Inequality(lhs, rhs);
    }
} // namespace app::classes::UnityEngine::Bounds
