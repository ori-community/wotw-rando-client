#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/RotationOrder__Enum.h>
#include <Modloader/app/structs/Space__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector3__Array.h>

namespace app::classes::UnityEngine::Transform {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6AD30, app::Vector3, get_position, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6ADB0, void, set_position, app::Transform* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x02C6AE10, app::Vector3, get_localPosition, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6AE90, void, set_localPosition, app::Transform* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x02C6AEF0, app::Vector3, GetLocalEulerAngles, app::Transform* this_ptr, app::RotationOrder__Enum order)
    IL2CPP_REGISTER_METHOD(0x02C6AF80, void, SetLocalEulerAngles, app::Transform* this_ptr, app::Vector3 euler, app::RotationOrder__Enum order)
    IL2CPP_REGISTER_METHOD(0x02C6AFF0, void, SetLocalEulerHint, app::Transform* this_ptr, app::Vector3 euler)
    IL2CPP_REGISTER_METHOD(0x02C6B050, app::Vector3, get_eulerAngles, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6B0F0, void, set_eulerAngles, app::Transform* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x02C6B200, app::Vector3, get_localEulerAngles, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6B2A0, void, set_localEulerAngles, app::Transform* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x02C6B3B0, app::Vector3, get_right, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6B520, void, set_right, app::Transform* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x02C6B760, app::Vector3, get_up, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6B8D0, void, set_up, app::Transform* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x02C6BB10, app::Vector3, get_forward, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6BC80, void, set_forward, app::Transform* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x02C6BD90, app::Quaternion, get_rotation, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6BE10, void, set_rotation, app::Transform* this_ptr, app::Quaternion value)
    IL2CPP_REGISTER_METHOD(0x02C6BE70, app::Quaternion, get_localRotation, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6BEF0, void, set_localRotation, app::Transform* this_ptr, app::Quaternion value)
    IL2CPP_REGISTER_METHOD(
        0x02C6BF50,
        void,
        BatchedGetTransformValues_1,
        app::Transform__Array* transforms,
        app::Vector3__Array* position,
        app::Quaternion__Array* rotation,
        app::Vector3__Array* scale
    )
    IL2CPP_REGISTER_METHOD(
        0x02C6BF50,
        void,
        Internal_BatchedGetTransformValues,
        app::Transform__Array* transforms,
        app::Vector3__Array* position,
        app::Quaternion__Array* rotation,
        app::Vector3__Array* scale
    )
    IL2CPP_REGISTER_METHOD(
        0x02C6BFD0,
        void,
        BatchedGetTransformValues_2,
        app::Transform__Array* transforms,
        int32_t count,
        app::Vector3__Array* position,
        app::Quaternion__Array* rotation,
        app::Vector3__Array* scale
    )
    IL2CPP_REGISTER_METHOD(
        0x02C6BFD0,
        void,
        Internal_BatchedGetTransformValuesWithCount,
        app::Transform__Array* transforms,
        int32_t count,
        app::Vector3__Array* position,
        app::Quaternion__Array* rotation,
        app::Vector3__Array* scale
    )
    IL2CPP_REGISTER_METHOD(
        0x02C6C050,
        void,
        BatchedSetTransformValues_1,
        app::Transform__Array* transforms,
        app::Vector3__Array* position,
        app::Quaternion__Array* rotation,
        app::Vector3__Array* scale
    )
    IL2CPP_REGISTER_METHOD(
        0x02C6C050,
        void,
        Internal_BatchedSetTransformValues,
        app::Transform__Array* transforms,
        app::Vector3__Array* position,
        app::Quaternion__Array* rotation,
        app::Vector3__Array* scale
    )
    IL2CPP_REGISTER_METHOD(
        0x02C6C0D0,
        void,
        BatchedSetTransformValues_2,
        app::Transform__Array* transforms,
        int32_t count,
        app::Vector3__Array* position,
        app::Quaternion__Array* rotation,
        app::Vector3__Array* scale
    )
    IL2CPP_REGISTER_METHOD(
        0x02C6C0D0,
        void,
        Internal_BatchedSetTransformValuesWithCount,
        app::Transform__Array* transforms,
        int32_t count,
        app::Vector3__Array* position,
        app::Quaternion__Array* rotation,
        app::Vector3__Array* scale
    )
    IL2CPP_REGISTER_METHOD(0x02C6C150, app::RotationOrder__Enum, get_rotationOrder, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6C1A0, void, set_rotationOrder, app::Transform* this_ptr, app::RotationOrder__Enum value)
    IL2CPP_REGISTER_METHOD(0x02C6C150, int32_t, GetRotationOrderInternal, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6C1A0, void, SetRotationOrderInternal, app::Transform* this_ptr, app::RotationOrder__Enum rotation_order)
    IL2CPP_REGISTER_METHOD(0x02C6C200, app::Vector3, get_localScale, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6C280, void, set_localScale, app::Transform* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x02C6C2E0, app::Transform*, get_parent, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6C330, void, set_parent, app::Transform* this_ptr, app::Transform* value)
    IL2CPP_REGISTER_METHOD(0x02C6C2E0, app::Transform*, get_parentInternal, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6C450, void, set_parentInternal, app::Transform* this_ptr, app::Transform* value)
    IL2CPP_REGISTER_METHOD(0x02C6C2E0, app::Transform*, GetParent, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6C450, void, SetParent_1, app::Transform* this_ptr, app::Transform* p)
    IL2CPP_REGISTER_METHOD(0x02C6C4C0, void, SetParent_2, app::Transform* this_ptr, app::Transform* parent, bool world_position_stays)
    IL2CPP_REGISTER_METHOD(0x02C6C540, app::Matrix4x4, get_worldToLocalMatrix, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6C5F0, app::Matrix4x4, get_localToWorldMatrix, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6C6A0, void, SetPositionAndRotation, app::Transform* this_ptr, app::Vector3 position, app::Quaternion rotation)
    IL2CPP_REGISTER_METHOD(0x02C6C710, void, Translate_1, app::Transform* this_ptr, app::Vector3 translation, app::Space__Enum relative_to)
    IL2CPP_REGISTER_METHOD(0x02C6C9F0, void, Translate_2, app::Transform* this_ptr, app::Vector3 translation)
    IL2CPP_REGISTER_METHOD(0x02C6CA20, void, Translate_3, app::Transform* this_ptr, float x, float y, float z, app::Space__Enum relative_to)
    IL2CPP_REGISTER_METHOD(0x02C6CA60, void, Translate_4, app::Transform* this_ptr, float x, float y, float z)
    IL2CPP_REGISTER_METHOD(0x02C6CAA0, void, Translate_5, app::Transform* this_ptr, app::Vector3 translation, app::Transform* relative_to)
    IL2CPP_REGISTER_METHOD(0x02C6CDC0, void, Translate_6, app::Transform* this_ptr, float x, float y, float z, app::Transform* relative_to)
    IL2CPP_REGISTER_METHOD(0x02C6CE00, void, Rotate_1, app::Transform* this_ptr, app::Vector3 eulers, app::Space__Enum relative_to)
    IL2CPP_REGISTER_METHOD(0x02C6D550, void, Rotate_2, app::Transform* this_ptr, app::Vector3 eulers)
    IL2CPP_REGISTER_METHOD(0x02C6D580, void, Rotate_3, app::Transform* this_ptr, float x_angle, float y_angle, float z_angle, app::Space__Enum relative_to)
    IL2CPP_REGISTER_METHOD(0x02C6D5C0, void, Rotate_4, app::Transform* this_ptr, float x_angle, float y_angle, float z_angle)
    IL2CPP_REGISTER_METHOD(0x02C6D600, void, RotateAroundInternal, app::Transform* this_ptr, app::Vector3 axis, float angle)
    IL2CPP_REGISTER_METHOD(0x02C6D670, void, Rotate_5, app::Transform* this_ptr, app::Vector3 axis, float angle, app::Space__Enum relative_to)
    IL2CPP_REGISTER_METHOD(0x02C6D810, void, Rotate_6, app::Transform* this_ptr, app::Vector3 axis, float angle)
    IL2CPP_REGISTER_METHOD(0x02C6D930, void, RotateAround_1, app::Transform* this_ptr, app::Vector3 point, app::Vector3 axis, float angle)
    IL2CPP_REGISTER_METHOD(0x02C6DBF0, void, LookAt_1, app::Transform* this_ptr, app::Transform* target, app::Vector3 world_up)
    IL2CPP_REGISTER_METHOD(0x02C6DD80, void, LookAt_2, app::Transform* this_ptr, app::Transform* target)
    IL2CPP_REGISTER_METHOD(0x02C6DF40, void, LookAt_3, app::Transform* this_ptr, app::Vector3 world_position, app::Vector3 world_up)
    IL2CPP_REGISTER_METHOD(0x02C6DFC0, void, LookAt_4, app::Transform* this_ptr, app::Vector3 world_position)
    IL2CPP_REGISTER_METHOD(0x02C6E0E0, void, Internal_LookAt, app::Transform* this_ptr, app::Vector3 world_position, app::Vector3 world_up)
    IL2CPP_REGISTER_METHOD(0x02C6E150, app::Vector3, TransformDirection_1, app::Transform* this_ptr, app::Vector3 direction)
    IL2CPP_REGISTER_METHOD(0x02C6E1E0, app::Vector3, TransformDirection_2, app::Transform* this_ptr, float x, float y, float z)
    IL2CPP_REGISTER_METHOD(0x02C6E290, app::Vector3, InverseTransformDirection_1, app::Transform* this_ptr, app::Vector3 direction)
    IL2CPP_REGISTER_METHOD(0x02C6E320, app::Vector3, InverseTransformDirection_2, app::Transform* this_ptr, float x, float y, float z)
    IL2CPP_REGISTER_METHOD(0x02C6E3D0, app::Vector3, TransformVector_1, app::Transform* this_ptr, app::Vector3 vector)
    IL2CPP_REGISTER_METHOD(0x02C6E460, app::Vector3, TransformVector_2, app::Transform* this_ptr, float x, float y, float z)
    IL2CPP_REGISTER_METHOD(0x02C6E510, app::Vector3, InverseTransformVector_1, app::Transform* this_ptr, app::Vector3 vector)
    IL2CPP_REGISTER_METHOD(0x02C6E5A0, app::Vector3, InverseTransformVector_2, app::Transform* this_ptr, float x, float y, float z)
    IL2CPP_REGISTER_METHOD(0x02C6E650, app::Vector3, TransformPoint_1, app::Transform* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x02C6E6E0, app::Vector3, TransformPoint_2, app::Transform* this_ptr, float x, float y, float z)
    IL2CPP_REGISTER_METHOD(0x02C6E790, app::Vector3, InverseTransformPoint_1, app::Transform* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x02C6E820, app::Vector3, InverseTransformPoint_2, app::Transform* this_ptr, float x, float y, float z)
    IL2CPP_REGISTER_METHOD(0x02C6E8D0, app::Transform*, get_root, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6E8D0, app::Transform*, GetRoot, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6E920, int32_t, get_childCount, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6E970, void, DetachChildren, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6E9C0, void, SetAsFirstSibling, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6EA10, void, SetAsLastSibling, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6EA60, void, SetSiblingIndex, app::Transform* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02C6EAC0, int32_t, GetSiblingIndex, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6EB10, app::Transform*, FindRelativeTransformWithPath, app::Transform* transform, app::String* path, bool is_active_only)
    IL2CPP_REGISTER_METHOD(0x02C6EB90, app::Transform*, Find, app::Transform* this_ptr, app::String* n)
    IL2CPP_REGISTER_METHOD(0x02C6EC90, void, SendTransformChangedScale, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6ECE0, app::Vector3, get_lossyScale, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6ED60, bool, IsChildOf, app::Transform* this_ptr, app::Transform* parent)
    IL2CPP_REGISTER_METHOD(0x02C6EDC0, bool, get_hasChanged, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6EE10, void, set_hasChanged, app::Transform* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02C6EE70, app::Transform*, FindChild, app::Transform* this_ptr, app::String* n)
    IL2CPP_REGISTER_METHOD(0x02C6EE80, app::IEnumerator*, GetEnumerator, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6EFD0, void, RotateAround_2, app::Transform* this_ptr, app::Vector3 axis, float angle)
    IL2CPP_REGISTER_METHOD(0x02C6F040, void, RotateAroundLocal, app::Transform* this_ptr, app::Vector3 axis, float angle)
    IL2CPP_REGISTER_METHOD(0x02C6F0B0, app::Transform*, GetChild, app::Transform* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02C6F110, int32_t, GetChildCount, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6F160, int32_t, get_hierarchyCapacity, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6F1B0, void, set_hierarchyCapacity, app::Transform* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02C6F160, int32_t, internal_getHierarchyCapacity, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6F1B0, void, internal_setHierarchyCapacity, app::Transform* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02C6F210, int32_t, get_hierarchyCount, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6F210, int32_t, internal_getHierarchyCount, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6F260, bool, IsNonUniformScaleTransform, app::Transform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C6F2B0, void, get_position_Injected, app::Transform* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x02C6F310, void, set_position_Injected, app::Transform* this_ptr, app::Vector3* value)
    IL2CPP_REGISTER_METHOD(0x02C6F370, void, get_localPosition_Injected, app::Transform* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x02C6F3D0, void, set_localPosition_Injected, app::Transform* this_ptr, app::Vector3* value)
    IL2CPP_REGISTER_METHOD(0x02C6F430, void, GetLocalEulerAngles_Injected, app::Transform* this_ptr, app::RotationOrder__Enum order, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x02C6F4A0, void, SetLocalEulerAngles_Injected, app::Transform* this_ptr, app::Vector3* euler, app::RotationOrder__Enum order)
    IL2CPP_REGISTER_METHOD(0x02C6F510, void, SetLocalEulerHint_Injected, app::Transform* this_ptr, app::Vector3* euler)
    IL2CPP_REGISTER_METHOD(0x02C6F570, void, get_rotation_Injected, app::Transform* this_ptr, app::Quaternion* ret)
    IL2CPP_REGISTER_METHOD(0x02C6F5D0, void, set_rotation_Injected, app::Transform* this_ptr, app::Quaternion* value)
    IL2CPP_REGISTER_METHOD(0x02C6F630, void, get_localRotation_Injected, app::Transform* this_ptr, app::Quaternion* ret)
    IL2CPP_REGISTER_METHOD(0x02C6F690, void, set_localRotation_Injected, app::Transform* this_ptr, app::Quaternion* value)
    IL2CPP_REGISTER_METHOD(0x02C6F6F0, void, get_localScale_Injected, app::Transform* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x02C6F750, void, set_localScale_Injected, app::Transform* this_ptr, app::Vector3* value)
    IL2CPP_REGISTER_METHOD(0x02C6F7B0, void, get_worldToLocalMatrix_Injected, app::Transform* this_ptr, app::Matrix4x4* ret)
    IL2CPP_REGISTER_METHOD(0x02C6F810, void, get_localToWorldMatrix_Injected, app::Transform* this_ptr, app::Matrix4x4* ret)
    IL2CPP_REGISTER_METHOD(0x02C6F870, void, SetPositionAndRotation_Injected, app::Transform* this_ptr, app::Vector3* position, app::Quaternion* rotation)
    IL2CPP_REGISTER_METHOD(0x02C6F8E0, void, RotateAroundInternal_Injected, app::Transform* this_ptr, app::Vector3* axis, float angle)
    IL2CPP_REGISTER_METHOD(0x02C6F950, void, Internal_LookAt_Injected, app::Transform* this_ptr, app::Vector3* world_position, app::Vector3* world_up)
    IL2CPP_REGISTER_METHOD(0x02C6F9C0, void, TransformDirection_Injected, app::Transform* this_ptr, app::Vector3* direction, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x02C6FA30, void, InverseTransformDirection_Injected, app::Transform* this_ptr, app::Vector3* direction, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x02C6FAA0, void, TransformVector_Injected, app::Transform* this_ptr, app::Vector3* vector, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x02C6FB10, void, InverseTransformVector_Injected, app::Transform* this_ptr, app::Vector3* vector, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x02C6FB80, void, TransformPoint_Injected, app::Transform* this_ptr, app::Vector3* position, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x02C6FBF0, void, InverseTransformPoint_Injected, app::Transform* this_ptr, app::Vector3* position, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x02C6FC60, void, get_lossyScale_Injected, app::Transform* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x02C6FCC0, void, RotateAround_Injected, app::Transform* this_ptr, app::Vector3* axis, float angle)
    IL2CPP_REGISTER_METHOD(0x02C6FD30, void, RotateAroundLocal_Injected, app::Transform* this_ptr, app::Vector3* axis, float angle)
} // namespace app::classes::UnityEngine::Transform
