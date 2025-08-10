#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/MoonDebug.h>
#include <Modloader/app/structs/MoonDebugMessageType__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::MoonDebug {
    IL2CPP_REGISTER_METHOD(0x031A1030, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x031A11B0, void, ctor, app::MoonDebug* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A1370, void, OnApplicationQuit, )
    IL2CPP_REGISTER_METHOD(0x031A14B0, void, AddMessage, app::MoonDebugMessageType__Enum typ, app::String* text, app::Object_1* obj)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawArrow_1, app::Vector3 from, app::Vector3 to, app::Color color, float tip_size)
    IL2CPP_REGISTER_METHOD(0x031A1740, void, DrawArrow_2, app::Vector3 from, app::Vector3 to, app::Vector3 forward, app::Color color, float tip_size)
    IL2CPP_REGISTER_METHOD(0x031A1BE0, void, DrawCircle, app::Vector3 position, float radius, app::Color color)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawRectangle_1, app::Rect rect, app::Color color)
    IL2CPP_REGISTER_METHOD(0x031A1EB0, void, DrawRectangle_2, app::Vector3 position, float width, float height, app::Color color)
    IL2CPP_REGISTER_METHOD(
        0x031A2130,
        void,
        DrawArc,
        app::Vector3 position,
        float radius,
        float arc_degrees,
        app::Quaternion rotation,
        app::Color color,
        int32_t amount_of_points
    )
    IL2CPP_REGISTER_METHOD(0x031A24E0, app::Vector3, RotatePointAroundPivot, app::Vector3 point, app::Vector3 pivot, app::Quaternion angles)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawCapsule2D_1, app::Vector3 base_circle_center, app::Vector3 top_circle_center, float radius, app::Color color)
    IL2CPP_REGISTER_METHOD(
        0x031A2690,
        void,
        DrawCapsule2D_2,
        app::Vector3 base_circle_center,
        app::Vector3 top_circle_center,
        float base_radius,
        float top_radius,
        app::Color color
    )
    IL2CPP_REGISTER_METHOD(0x031A2EF0, void, Flush, )
    IL2CPP_REGISTER_METHOD(0x031A34E0, void, LogFormat, app::String* message, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x031A35F0, void, Log, app::Object* message, app::Object_1* obj)
    IL2CPP_REGISTER_METHOD(0x031A3700, void, LogInBuild, app::Object* message, app::Object_1* obj)
    IL2CPP_REGISTER_METHOD(0x031A3790, void, LogWarningFormat, app::Object_1* obj, app::String* text, app::Object__Array* arg)
    IL2CPP_REGISTER_METHOD(0x031A3960, void, LogWarning, app::String* text, app::Object_1* obj)
    IL2CPP_REGISTER_METHOD(0x031A3A70, void, LogError_1, app::String* text, app::Object_1* obj)
    IL2CPP_REGISTER_METHOD(0x031A3D30, void, LogError_2, app::Exception* e, app::Object_1* obj)
    IL2CPP_REGISTER_METHOD(0x031A4010, void, LogErrorFormat_1, app::String* error, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x031A40C0, void, LogErrorFormat_2, app::Object_1* context, app::String* error, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x031A4180, void, LogException, app::Exception* exception, app::Object_1* obj)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LogAssertion, app::String* text, app::Object_1* obj)
    IL2CPP_REGISTER_METHOD(0x031A46C0, app::String*, GetCurrentSceneName, )
    IL2CPP_REGISTER_METHOD(0x031A4740, app::String*, GetFullHierarchy, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x031A4900, app::String*, GetObjectPath, app::Object_1* obj)
    IL2CPP_REGISTER_METHOD(0x031A4B10, void, DrawLine_1, app::Vector3 origin, app::Vector3 target, app::Color color)
    IL2CPP_REGISTER_METHOD(0x031A4C00, void, DrawLine_2, app::Vector3 origin, app::Vector3 target, app::Color color, float duration)
    IL2CPP_REGISTER_METHOD(0x031A4D10, void, DrawRay, app::Vector3 origin, app::Vector3 dir, app::Color color)
    IL2CPP_REGISTER_METHOD(0x031A4E90, void, DrawLolipop, app::Vector3 from, app::Vector3 to, float radius, app::Color color)
    IL2CPP_REGISTER_METHOD(0x031A5030, void, cctor, )
} // namespace app::classes::Moon::MoonDebug
