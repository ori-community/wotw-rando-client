#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_UberWaterReflectionView_Group_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IList_1_System_Object_.h>
#include <Modloader/app/structs/IList_1_UnityEngine_Material_.h>
#include <Modloader/app/structs/List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/MonoBehaviour.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Rect__Array.h>
#include <Modloader/app/structs/RenderTarget.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Utility.h>
#include <Modloader/app/structs/Utility_MoveDirection__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Utility {
    IL2CPP_REGISTER_METHOD(0x013B1C70, void, Initialize, )
    IL2CPP_REGISTER_METHOD(0x013B1E90, bool, get_IsQuitting, )
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsPlaying, )
    IL2CPP_REGISTER_METHOD(0x013B1F30, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x013B21A0, void, OnQuit, )
    IL2CPP_REGISTER_METHOD(0x013B2240, void, DisableLate, app::MonoBehaviour* target)
    IL2CPP_REGISTER_METHOD(0x013B2300, app::IEnumerator*, DisableLater, app::MonoBehaviour* target)
    IL2CPP_REGISTER_METHOD(0x013B2450, app::String*, LowercaseFirstLetter, app::String* s)
    IL2CPP_REGISTER_METHOD(0x013B25D0, app::Rect, RectFromBounds, app::Bounds bounds)
    IL2CPP_REGISTER_METHOD(0x013B2690, bool, LineInBox, app::Rect rect, app::Vector3 origin, app::Vector3 delta)
    IL2CPP_REGISTER_METHOD(0x013B26E0, app::Bounds, BoundsFromPoints_1, app::Vector3 p1, app::Vector3 p2)
    IL2CPP_REGISTER_METHOD(0x013B28B0, app::Bounds, BoundsFromPoints_2, app::Vector3 p1, app::Vector3 p2, app::Vector3 p3)
    IL2CPP_REGISTER_METHOD(0x013B2A90, app::Bounds, BoundsFromPoints_3, app::Vector3 p1, app::Vector3 p2, app::Vector3 p3, app::Vector3 p4)
    IL2CPP_REGISTER_METHOD(0x013B2C90, app::Bounds, BoundsFromTransform, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x013B31B0, float, ColorDiff, app::Color a, app::Color b)
    IL2CPP_REGISTER_METHOD(0x013B32D0, app::Rect, CombineRects_1, app::Rect a, app::Rect b)
    IL2CPP_REGISTER_METHOD(0x013B33F0, app::Rect, CombineRects_2, app::Rect__Array* rects)
    IL2CPP_REGISTER_METHOD(0x013B3540, app::Rect, CombineRects_3, app::List_1_UnityEngine_Rect_* rects)
    IL2CPP_REGISTER_METHOD(0x013B3690, float, Normalize, float x)
    IL2CPP_REGISTER_METHOD(0x013B3770, float, Angle, float angle)
    IL2CPP_REGISTER_METHOD(0x013B37A0, float, AngleDifference, float value1, float value2)
    IL2CPP_REGISTER_METHOD(0x013B3870, float, RotateTowards, float value, float target, float distance)
    IL2CPP_REGISTER_METHOD(0x013B3AC0, float, MoveNumberTowards, float value, float target, float distance)
    IL2CPP_REGISTER_METHOD(0x013B3BB0, float, ClampedAdd, float value, float offset, float min, float max)
    IL2CPP_REGISTER_METHOD(0x013B3CD0, float, ClampedSubtract, float value, float offset, float min, float max)
    IL2CPP_REGISTER_METHOD(0x013B3DE0, app::Vector3, Rotate, app::Vector3 v, float angle)
    IL2CPP_REGISTER_METHOD(0x013B3EF0, app::Vector3, Unrotate, app::Vector3 v, float angle)
    IL2CPP_REGISTER_METHOD(0x013B4010, app::String*, PathGoBack, app::String* path)
    IL2CPP_REGISTER_METHOD(0x013B4170, app::Vector3, DirectionToVector, app::Utility_MoveDirection__Enum direction)
    IL2CPP_REGISTER_METHOD(0x013B42E0, app::String*, NumberToString, int32_t number, int32_t digits)
    IL2CPP_REGISTER_METHOD(0x013B4340, int32_t, Wrap, int32_t value, int32_t min, int32_t max)
    IL2CPP_REGISTER_METHOD(0x013B4360, app::Bounds, LocalHierarchyBoundingBox, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x013B4EA0, app::Bounds, BoundsOfBounds, app::Matrix4x4 matrix, app::Bounds bounds)
    IL2CPP_REGISTER_METHOD(0x013B5690, app::Vector3, LerpVector3, app::Vector3 start, app::Vector3 end, app::Vector3 r)
    IL2CPP_REGISTER_METHOD(
        0x013B5820,
        app::Bounds,
        EncapsulateChildren,
        app::Transform* trans,
        app::Bounds* current,
        bool* has_bounds,
        bool use_transform_scale,
        bool use_colliders
    )
    IL2CPP_REGISTER_METHOD(0x013B5E80, void, ResetLocalScale, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x013B66C0, app::Bounds, WorldSpaceHierarchyBoundingBox, app::GameObject* game_object, bool use_transform_scale, bool use_colliders)
    IL2CPP_REGISTER_METHOD(0x013B6830, float, Round_1, float value, float grid)
    IL2CPP_REGISTER_METHOD(0x013B6990, app::Rect, Round_2, app::Rect rect, float grid)
    IL2CPP_REGISTER_METHOD(0x013B6B10, app::Vector3, Round_3, app::Vector3 vector, float grid)
    IL2CPP_REGISTER_METHOD(0x013B6C40, app::Vector3, Round_4, app::Vector3 vector)
    IL2CPP_REGISTER_METHOD(0x013B6DF0, app::Rect, Round_5, app::Rect rect)
    IL2CPP_REGISTER_METHOD(0x013B7000, float, Floor, float value, float grid)
    IL2CPP_REGISTER_METHOD(0x013B70D0, float, Ceil, float value, float grid)
    IL2CPP_REGISTER_METHOD(0x013B71A0, void, DontAssociateWithAnyScene, app::GameObject* go)
    IL2CPP_REGISTER_METHOD(0x013B7270, void, Destroy_1, app::Object_1* obj)
    IL2CPP_REGISTER_METHOD(0x013B7310, app::String*, GetObjectHierarchy_1, app::Component_1* cmp, bool include_scene)
    IL2CPP_REGISTER_METHOD(0x013B7420, app::String*, GetObjectHierarchy_2, app::GameObject* go, bool include_scene)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Utility* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x0157DBD0, app::Object*, GetComponentUpwards, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x0156B1F0, bool, TryParseEnum, app::String* string_value, app::Object** enum_value)
    IL2CPP_REGISTER_METHOD(0x015E6D70, void, Swap_1, app::Object** a, app::Object** b)
    IL2CPP_REGISTER_METHOD(0x015E6B90, void, Destroy_2, app::IList_1_System_Object_* objects)
    IL2CPP_REGISTER_METHOD(0x015E6CC0, void, Destroy_3, app::Object** obj)
    IL2CPP_REGISTER_METHOD(0x01539DE0, int32_t, EnumCount_1, )
    IL2CPP_REGISTER_METHOD(0x015E6B90, void, Destroy_4, app::IList_1_UnityEngine_Material_* objects)
    IL2CPP_REGISTER_METHOD(0x015E6D70, void, Swap_2, app::RenderTarget** a, app::RenderTarget** b)
    IL2CPP_REGISTER_METHOD(0x01539C20, int32_t, EnumCount_2, )
    IL2CPP_REGISTER_METHOD(0x01539D00, int32_t, EnumCount_3, )
    IL2CPP_REGISTER_METHOD(0x01539C20, int32_t, EnumCount_4, )
    IL2CPP_REGISTER_METHOD(0x01539D00, int32_t, EnumCount_5, )
    IL2CPP_REGISTER_METHOD(0x01539C20, int32_t, EnumCount_6, )
    IL2CPP_REGISTER_METHOD(
        0x015E6D70,
        void,
        Swap_3,
        app::List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_** a,
        app::List_1_MoonTelemetryCharacterHeartbeatEvent_Cleanup_** b
    )
    IL2CPP_REGISTER_METHOD(0x015E6D70, void, Swap_4, app::HashSet_1_UberWaterReflectionView_Group_** a, app::HashSet_1_UberWaterReflectionView_Group_** b)
    IL2CPP_REGISTER_METHOD(0x01539C20, int32_t, EnumCount_7, )
    IL2CPP_REGISTER_METHOD(0x01539D00, int32_t, EnumCount_8, )
} // namespace app::classes::Utility
