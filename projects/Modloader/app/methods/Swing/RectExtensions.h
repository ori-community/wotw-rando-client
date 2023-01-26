#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RectExt.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Swing::RectExtensions {
    IL2CPP_REGISTER_METHOD(0x0182EF30, app::Rect, scale_1, (app::Rect _this, float _scale))
    IL2CPP_REGISTER_METHOD(0x0182EF80, app::Rect, scale_2, (app::Rect _this, float _scale_x, float _scale_y))
    IL2CPP_REGISTER_METHOD(0x0182EFC0, app::Rect, scale_3, (app::Rect _this, app::Vector2 _scale))
    IL2CPP_REGISTER_METHOD(0x0182F020, app::Rect, inflate, (app::Rect _this, float _factor))
    IL2CPP_REGISTER_METHOD(0x0182F080, app::Rect, translate, (app::Rect _this, app::Vector2 _offset))
    IL2CPP_REGISTER_METHOD(0x0182F0C0, app::Rect, encapsulate_1, (app::Rect _this, app::Rect _rect))
    IL2CPP_REGISTER_METHOD(0x0182F160, app::Rect, encapsulate_2, (app::Rect _this, app::Vector2 _point))
    IL2CPP_REGISTER_METHOD(0x0182F1F0, app::Vector2, xMinYMin, (app::Rect _this))
    IL2CPP_REGISTER_METHOD(0x0182F210, app::Vector2, xMinYMax, (app::Rect _this))
    IL2CPP_REGISTER_METHOD(0x0182F230, app::Vector2, xMaxYMax, (app::Rect _this))
    IL2CPP_REGISTER_METHOD(0x0182F250, app::Vector2, xMaxYMin, (app::Rect _this))
    IL2CPP_REGISTER_METHOD(0x0182E070, app::Rect, fromPosSize, (app::Vector2 _pos, app::Vector2 _size))
    IL2CPP_REGISTER_METHOD(0x0182F270, app::Rect, fromCenterSize, (app::Vector2 _center, app::Vector2 _size))
    IL2CPP_REGISTER_METHOD(0x0182E1A0, app::Rect, fromMinMax, (app::Vector2 _min, app::Vector2 _max))
    IL2CPP_REGISTER_METHOD(0x0182F360, app::Rect, fromToRect, (app::Vector2 _from, app::Vector2 _to))
    IL2CPP_REGISTER_METHOD(0x0182F400, void, splitLeft_1, (app::Rect _this, float _left_width, app::Rect* _left, app::Rect* _right, float _spacing))
    IL2CPP_REGISTER_METHOD(0x0182F490, void, splitRight_1, (app::Rect _this, float _right_width, app::Rect* _left, app::Rect* _right, float _spacing))
    IL2CPP_REGISTER_METHOD(0x0182F520, void, splitTop_1, (app::Rect _this, float _top_height, app::Rect* _top, app::Rect* _bottom, float _spacing))
    IL2CPP_REGISTER_METHOD(0x0182F5C0, void, splitBottom_1, (app::Rect _this, float _bottom_height, app::Rect* _top, app::Rect* _bottom, float _spacing))
    IL2CPP_REGISTER_METHOD(0x0182F670, void, splitLeft_2, (app::Rect _this, float _left_width, app::RectExt* _left, app::RectExt* _right, float _spacing))
    IL2CPP_REGISTER_METHOD(0x0182F700, void, splitRight_2, (app::Rect _this, float _right_width, app::RectExt* _left, app::RectExt* _right, float _spacing))
    IL2CPP_REGISTER_METHOD(0x0182F790, void, splitTop_2, (app::Rect _this, float _top_height, app::RectExt* _top, app::RectExt* _bottom, float _spacing))
    IL2CPP_REGISTER_METHOD(0x0182F830, void, splitBottom_2, (app::Rect _this, float _bottom_height, app::RectExt* _top, app::RectExt* _bottom, float _spacing))
    IL2CPP_REGISTER_METHOD(0x0182F8E0, app::Rect, inverseY_1, (app::Rect _this))
    IL2CPP_REGISTER_METHOD(0x0182F910, app::Rect, inverseY_2, (app::Rect _this, float _container_height))
    IL2CPP_REGISTER_METHOD(0x0182F930, app::Rect, inverseY_3, (app::Rect _this, app::Rect _container))
    IL2CPP_REGISTER_METHOD(0x0182F960, app::Rect, inverseYMax_1, (app::Rect _this, float _container_height))
    IL2CPP_REGISTER_METHOD(0x0182F990, app::Rect, inverseYMax_2, (app::Rect _this, app::Rect _container))
} // namespace app::classes::Swing::RectExtensions
