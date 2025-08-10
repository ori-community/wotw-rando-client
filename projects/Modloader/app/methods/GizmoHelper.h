#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/GUIContent.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GizmoHelper {
    IL2CPP_REGISTER_METHOD(
        0x02553910,
        void,
        DrawTextFilled_1,
        app::Vector3 position,
        app::Vector3 scale,
        app::String* title,
        app::Color fill_color,
        app::Color outline_color
    )
    IL2CPP_REGISTER_METHOD(
        0x02553A40,
        void,
        DrawTextFilledNoSelectableBox,
        app::Vector3 position,
        app::Vector3 scale,
        app::String* title,
        app::Color fill_color,
        app::Color outline_color
    )
    IL2CPP_REGISTER_METHOD(
        0x02553B40,
        void,
        DrawTextFilled_2,
        app::Transform* transform,
        app::String* title,
        app::Color fill_color,
        app::Color outline_color,
        bool bound
    )
    IL2CPP_REGISTER_METHOD(0x02553E20, void, DrawTextFilled_3, app::Vector3 position, app::Vector3 scale, app::String* title)
    IL2CPP_REGISTER_METHOD(0x02553FD0, void, DrawTextFilled_4, app::Transform* transform, app::String* title, bool bounds)
    IL2CPP_REGISTER_METHOD(0x025540C0, void, DrawTextNoFill_1, app::Vector3 position, app::Vector3 scale, app::String* title)
    IL2CPP_REGISTER_METHOD(0x02554270, void, DrawTextNoFill_2, app::Transform* transform, app::String* title, bool bounds)
    IL2CPP_REGISTER_METHOD(
        0x02554360,
        void,
        DrawSelectedTextFilled_1,
        app::Transform* transform,
        app::String* title,
        app::Color fill_color,
        app::Color outline_color,
        bool bound
    )
    IL2CPP_REGISTER_METHOD(
        0x025545C0,
        void,
        DrawSelectedTextFilled_2,
        app::Transform* transform,
        app::String* title,
        app::Color fill_color,
        app::Color outline_color
    )
    IL2CPP_REGISTER_METHOD(0x025546B0, void, DrawSelectedTextFilled_3, app::Transform* transform, app::String* title, bool bounds)
    IL2CPP_REGISTER_METHOD(0x025547A0, void, SelectableBox, app::Vector3 position, app::Vector3 size)
    IL2CPP_REGISTER_METHOD(0x02554970, void, DrawArrow, app::Vector3 from, app::Vector3 to, app::Vector3 forward, app::Color color, float tip_size)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawRectangle, app::Vector3 position, app::Vector3 size, app::Color fill, app::Color outline)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawWireCircle, app::Vector3 position, float radius, app::Color outline)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawWireArc, app::Vector3 position, float radius, app::Vector3 from, float angle, app::Color outline)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawSolidArc, app::Vector3 position, float radius, app::Vector3 from, float angle, app::Color color)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawFilledCircle, app::Vector3 position, float radius, app::Color fill, app::Color outline)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        DrawFilledCircleWithCenteredText,
        app::String* text,
        app::Vector3 position,
        float radius,
        app::Color fill,
        app::Color outline
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawCircleWithSideText, app::String* text, app::Vector3 position, float radius, app::Color circle_outline)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawFilledSphere, app::Vector3 position, float radius, app::Color color)
    IL2CPP_REGISTER_METHOD(0x02554FD0, void, DrawOutline, app::Vector3 position, app::Vector3 size, app::Color outline)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::GUIStyle*, get_CenteredWhiteBoldText, )
    IL2CPP_REGISTER_METHOD(0x02555060, void, DrawCenteredText_1, app::String* text, app::Vector3 position, app::GUIStyle* style, bool sideways)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawCenteredText_2, app::GUIContent* content, app::Vector3 position, app::GUIStyle* style, bool sideways)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawText, app::GUIContent* content, app::Vector3 position, app::GUIStyle* style, bool sideways)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawLine, app::Vector3 start, app::Vector3 end, app::Color fill)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawCube, app::Vector3 start, app::Vector3 end, app::Color fill)
    IL2CPP_REGISTER_METHOD(0x025551D0, bool, ShouldTextBeSideways, app::Vector3 size)
    IL2CPP_REGISTER_METHOD(0x025552A0, bool, IsOnCamera, app::Vector3 position, app::Vector3 scale)
    IL2CPP_REGISTER_METHOD(0x02555B50, app::Vector2, GetCameraDistance, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x02556050, void, DrawStartEndGizmo, app::Vector3 start_position, app::Vector3 end_position)
    IL2CPP_REGISTER_METHOD(0x02556330, app::Vector3, ScreenToWorld, app::Vector2 screen, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x025563E0, app::Vector2, WorldToScreen, app::Vector3 world)
    IL2CPP_REGISTER_METHOD(0x025564C0, app::Bounds, BoundsFromTransform, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x025569E0, app::Bounds, BoundsFromPoints, app::Vector3 p1, app::Vector3 p2, app::Vector3 p3, app::Vector3 p4)
    IL2CPP_REGISTER_METHOD(0x02556BE0, void, cctor, )
} // namespace app::classes::GizmoHelper
