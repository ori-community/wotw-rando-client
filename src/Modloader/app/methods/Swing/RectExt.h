#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RectExt.h>
#include <Modloader/app/structs/RectExt__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextAnchor__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Swing::RectExt {
    IL2CPP_REGISTER_METHOD(0x0182E030, app::RectExt, op_Implicit_1, app::Rect _rect)
    IL2CPP_REGISTER_METHOD(0x0182E050, app::Rect, op_Implicit_2, app::RectExt _rect)
    IL2CPP_REGISTER_METHOD(0x0014B910, void, ctor_1, app::RectExt__Boxed* this_ptr, app::Vector2 _top_left, app::Vector2 _size)
    IL2CPP_REGISTER_METHOD(0x0014B950, void, ctor_2, app::RectExt__Boxed* this_ptr, app::Vector2 _pos, app::Vector2 _size, bool _centered)
    IL2CPP_REGISTER_METHOD(0x0182E070, app::RectExt, fromPosSize, app::Vector2 _top_left, app::Vector2 _size)
    IL2CPP_REGISTER_METHOD(0x0182E0B0, app::RectExt, fromCenterSize, app::Vector2 _center, app::Vector2 _size)
    IL2CPP_REGISTER_METHOD(0x0182E1A0, app::RectExt, fromMinMax, app::Vector2 _min, app::Vector2 _max)
    IL2CPP_REGISTER_METHOD(0x0182E200, app::RectExt, fromToRect, app::Vector2 _from, app::Vector2 _to)
    IL2CPP_REGISTER_METHOD(
        0x0182E290,
        app::RectExt,
        anchoredInContainer,
        app::Rect _container,
        app::TextAnchor__Enum _anchor,
        app::Vector2 _size,
        float _x_margin,
        float _y_margin
    )
    IL2CPP_REGISTER_METHOD(0x0014BA90, app::Vector2, get_xMinYMin, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014BAB0, void, set_xMinYMin, app::RectExt__Boxed* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x0014BB00, app::Vector2, get_xMinYMax, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014BB20, void, set_xMinYMax, app::RectExt__Boxed* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x0014BB60, app::Vector2, get_xMaxYMax, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014BB80, void, set_xMaxYMax, app::RectExt__Boxed* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x0014BBB0, app::Vector2, get_xMaxYMin, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014BBD0, void, set_xMaxYMin, app::RectExt__Boxed* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x0014BA90, app::Vector2, get_position, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0011D290, void, set_position, app::RectExt__Boxed* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x0014BC10, app::Vector2, get_size, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014BC30, void, set_size, app::RectExt__Boxed* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x0014BC50, void, encapsulate_1, app::RectExt__Boxed* this_ptr, app::Rect _rect)
    IL2CPP_REGISTER_METHOD(0x0014BD00, void, encapsulate_2, app::RectExt__Boxed* this_ptr, app::Vector2 _point)
    IL2CPP_REGISTER_METHOD(0x0014BD60, void, scale_1, app::RectExt__Boxed* this_ptr, float _scale)
    IL2CPP_REGISTER_METHOD(0x0014BD80, void, scale_2, app::RectExt__Boxed* this_ptr, float _scale_x, float _scale_y)
    IL2CPP_REGISTER_METHOD(0x0014BDB0, void, scale_3, app::RectExt__Boxed* this_ptr, app::Vector2 _scale)
    IL2CPP_REGISTER_METHOD(0x0014BDF0, void, flipX, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014BE10, void, flipY, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0182E620, app::RectExt, op_Multiply_1, app::RectExt _rect, float _mult)
    IL2CPP_REGISTER_METHOD(0x0182E640, app::RectExt, op_Multiply_2, app::RectExt _rect, app::Vector2 _mult)
    IL2CPP_REGISTER_METHOD(0x0182E690, app::RectExt, op_Division_1, app::RectExt _rect, float _div)
    IL2CPP_REGISTER_METHOD(0x0182E6B0, app::RectExt, op_Division_2, app::RectExt _rect, app::Vector2 _div)
    IL2CPP_REGISTER_METHOD(
        0x0014BE30,
        void,
        splitLeft,
        app::RectExt__Boxed* this_ptr,
        float _left_width,
        app::RectExt* _left,
        app::RectExt* _right,
        float _spacing
    )
    IL2CPP_REGISTER_METHOD(
        0x0014BED0,
        void,
        splitRight,
        app::RectExt__Boxed* this_ptr,
        float _right_width,
        app::RectExt* _left,
        app::RectExt* _right,
        float _spacing
    )
    IL2CPP_REGISTER_METHOD(
        0x0014BF70,
        void,
        splitTop,
        app::RectExt__Boxed* this_ptr,
        float _top_height,
        app::RectExt* _top,
        app::RectExt* _bottom,
        float _spacing
    )
    IL2CPP_REGISTER_METHOD(
        0x0014C010,
        void,
        splitBottom,
        app::RectExt__Boxed* this_ptr,
        float _bottom_height,
        app::RectExt* _top,
        app::RectExt* _bottom,
        float _spacing
    )
    IL2CPP_REGISTER_METHOD(0x0014C0B0, app::RectExt, consumeLeft, app::RectExt__Boxed* this_ptr, float _left_width, float _spacing)
    IL2CPP_REGISTER_METHOD(0x0014C120, app::RectExt, consumeLeftInv, app::RectExt__Boxed* this_ptr, float _right_width, float _spacing)
    IL2CPP_REGISTER_METHOD(0x0014C190, app::RectExt, consumeRight, app::RectExt__Boxed* this_ptr, float _right_width, float _spacing)
    IL2CPP_REGISTER_METHOD(0x0014C210, app::RectExt, consumeRightInv, app::RectExt__Boxed* this_ptr, float _left_width, float _spacing)
    IL2CPP_REGISTER_METHOD(0x0014C260, app::RectExt, consumeTop, app::RectExt__Boxed* this_ptr, float _top_height, float _spacing)
    IL2CPP_REGISTER_METHOD(0x0014C2D0, app::RectExt, consumeTopInv, app::RectExt__Boxed* this_ptr, float _bottom_height, float _spacing)
    IL2CPP_REGISTER_METHOD(0x0014C350, app::RectExt, consumeBottom, app::RectExt__Boxed* this_ptr, float _bottom_height, float _spacing)
    IL2CPP_REGISTER_METHOD(0x0014C3D0, app::RectExt, consumeBottomInv, app::RectExt__Boxed* this_ptr, float _top_height, float _spacing)
    IL2CPP_REGISTER_METHOD(0x0014C420, bool, clamp, app::RectExt__Boxed* this_ptr, app::RectExt _container)
    IL2CPP_REGISTER_METHOD(0x00121740, void, ctor_3, app::RectExt__Boxed* this_ptr, float left, float top, float width, float height)
    IL2CPP_REGISTER_METHOD(0x0014C4D0, void, ctor_4, app::RectExt__Boxed* this_ptr, app::RectExt source)
    IL2CPP_REGISTER_METHOD(0x0182E710, app::RectExt, MinMaxRect, float left, float top, float right, float bottom)
    IL2CPP_REGISTER_METHOD(0x0182E740, app::RectExt, MinMaxUV, float u_min, float u_max, float v_min, float v_max)
    IL2CPP_REGISTER_METHOD(0x00121740, void, Set, app::RectExt__Boxed* this_ptr, float left, float top, float width, float height)
    IL2CPP_REGISTER_METHOD(0x0010FDD0, float, get_x, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00114F30, void, set_x, app::RectExt__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0010FDE0, float, get_y, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001155C0, void, set_y, app::RectExt__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0010FDD0, float, get_xMin, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014C500, void, set_xMin, app::RectExt__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0010FDE0, float, get_yMin, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014C520, void, set_yMin, app::RectExt__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0014C540, float, get_xMax, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014C550, void, set_xMax, app::RectExt__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0014C560, float, get_yMax, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014C570, void, set_yMax, app::RectExt__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00111970, float, get_width, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00115B30, void, set_width, app::RectExt__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00111980, float, get_height, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00115B40, void, set_height, app::RectExt__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0014C580, app::Vector2, get_center, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014C5B0, void, set_center, app::RectExt__Boxed* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x0014C5F0, bool, Contains_1, app::RectExt__Boxed* this_ptr, app::Vector2 point)
    IL2CPP_REGISTER_METHOD(0x0014C650, bool, Contains_2, app::RectExt__Boxed* this_ptr, app::Vector3 point)
    IL2CPP_REGISTER_METHOD(0x0182E770, bool, op_Inequality, app::RectExt lhs, app::RectExt rhs)
    IL2CPP_REGISTER_METHOD(0x0182E7E0, bool, op_Equality, app::RectExt lhs, app::RectExt rhs)
    IL2CPP_REGISTER_METHOD(0x0014C6C0, int32_t, GetHashCode, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014C740, bool, Equals, app::RectExt__Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x0014C750, app::String*, ToString_1, app::RectExt__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014C760, app::String*, ToString_2, app::RectExt__Boxed* this_ptr, app::String* format)
    inline app::RectExt operator*(app::RectExt _rect, float _mult) { return op_Multiply_1(_rect, _mult); }
    inline app::RectExt operator*(app::RectExt _rect, app::Vector2 _mult) { return op_Multiply_2(_rect, _mult); }
    inline app::RectExt operator/(app::RectExt _rect, float _div) { return op_Division_1(_rect, _div); }
    inline app::RectExt operator/(app::RectExt _rect, app::Vector2 _div) { return op_Division_2(_rect, _div); }
    inline bool operator!=(app::RectExt lhs, app::RectExt rhs) { return op_Inequality(lhs, rhs); }
    inline bool operator==(app::RectExt lhs, app::RectExt rhs) { return op_Equality(lhs, rhs); }
} // namespace app::classes::Swing::RectExt
