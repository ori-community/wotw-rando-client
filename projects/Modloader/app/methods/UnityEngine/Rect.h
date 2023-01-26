#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Rect__Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::Rect {
    IL2CPP_REGISTER_METHOD(0x00121740, void, ctor_1, (app::Rect__Boxed * this_ptr, float x, float y, float width, float height))
    IL2CPP_REGISTER_METHOD(0x0014B910, void, ctor_2, (app::Rect__Boxed * this_ptr, app::Vector2 position, app::Vector2 size))
    IL2CPP_REGISTER_METHOD(0x0014C4D0, void, ctor_3, (app::Rect__Boxed * this_ptr, app::Rect source))
    IL2CPP_REGISTER_METHOD(0x00F87B90, app::Rect, get_zero, ())
    IL2CPP_REGISTER_METHOD(0x0296D490, app::Rect, MinMaxRect, (float xmin, float ymin, float xmax, float ymax))
    IL2CPP_REGISTER_METHOD(0x00121740, void, Set, (app::Rect__Boxed * this_ptr, float x, float y, float width, float height))
    IL2CPP_REGISTER_METHOD(0x001EB400, float, get_x, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00114F30, void, set_x, (app::Rect__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x001EB410, float, get_y, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001155C0, void, set_y, (app::Rect__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0014BA90, app::Vector2, get_position, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011D290, void, set_position, (app::Rect__Boxed * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x00217C90, app::Vector2, get_center, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014C5B0, void, set_center, (app::Rect__Boxed * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x00217CC0, app::Vector2, get_min, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00217CE0, void, set_min, (app::Rect__Boxed * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x00217D30, app::Vector2, get_max, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014BB80, void, set_max, (app::Rect__Boxed * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x001D9B90, float, get_width, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00115B30, void, set_width, (app::Rect__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x001D9BA0, float, get_height, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00115B40, void, set_height, (app::Rect__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0014BC10, app::Vector2, get_size, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014BC30, void, set_size, (app::Rect__Boxed * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x001EB400, float, get_xMin, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00217D50, void, set_xMin, (app::Rect__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x001EB410, float, get_yMin, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00217D70, void, set_yMin, (app::Rect__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00217D90, float, get_xMax, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014C550, void, set_xMax, (app::Rect__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00217DA0, float, get_yMax, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0014C570, void, set_yMax, (app::Rect__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00217DB0, bool, Contains_1, (app::Rect__Boxed * this_ptr, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x00217DF0, bool, Contains_2, (app::Rect__Boxed * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x0296D5C0, app::Rect, OrderMinMax, (app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x00217E40, bool, Overlaps_1, (app::Rect__Boxed * this_ptr, app::Rect other))
    IL2CPP_REGISTER_METHOD(0x00217EA0, bool, Overlaps_2, (app::Rect__Boxed * this_ptr, app::Rect other, bool allow_inverse))
    IL2CPP_REGISTER_METHOD(0x0296D790, app::Vector2, PointToNormalized, (app::Rect rectangle, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x0296D880, bool, op_Inequality, (app::Rect lhs, app::Rect rhs))
    IL2CPP_REGISTER_METHOD(0x0296D8E0, bool, op_Equality, (app::Rect lhs, app::Rect rhs))
    IL2CPP_REGISTER_METHOD(0x00217EC0, int32_t, GetHashCode, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00217ED0, bool, Equals_1, (app::Rect__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x00217EE0, bool, Equals_2, (app::Rect__Boxed * this_ptr, app::Rect other))
    IL2CPP_REGISTER_METHOD(0x00217F00, app::String*, ToString, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB400, float, get_left, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00217D90, float, get_right, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB410, float, get_top, (app::Rect__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00217DA0, float, get_bottom, (app::Rect__Boxed * this_ptr))
    inline bool operator!=(app::Rect lhs, app::Rect rhs) {
        return op_Inequality(lhs, rhs);
    }
    inline bool operator==(app::Rect lhs, app::Rect rhs) {
        return op_Equality(lhs, rhs);
    }
} // namespace app::classes::UnityEngine::Rect
