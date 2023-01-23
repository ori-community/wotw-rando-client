#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GridLayoutGroup.h>
#include <Modloader/app/structs/GridLayoutGroup_Corner__Enum.h>
#include <Modloader/app/structs/GridLayoutGroup_Axis__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/GridLayoutGroup_Constraint__Enum.h>

namespace app::classes::UnityEngine::UI::GridLayoutGroup {
    IL2CPP_REGISTER_METHOD(0x024B4F90, void, ctor, (app::GridLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B5080, app::GridLayoutGroup_Corner__Enum, get_startCorner, (app::GridLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B5090, void, set_startCorner, (app::GridLayoutGroup * this_ptr, app::GridLayoutGroup_Corner__Enum value))
    IL2CPP_REGISTER_METHOD(0x024B5130, app::GridLayoutGroup_Axis__Enum, get_startAxis, (app::GridLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B5140, void, set_startAxis, (app::GridLayoutGroup * this_ptr, app::GridLayoutGroup_Axis__Enum value))
    IL2CPP_REGISTER_METHOD(0x024B51E0, app::Vector2, get_cellSize, (app::GridLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B5200, void, set_cellSize, (app::GridLayoutGroup * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x024B5290, app::Vector2, get_spacing, (app::GridLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B52B0, void, set_spacing, (app::GridLayoutGroup * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x024B5350, app::GridLayoutGroup_Constraint__Enum, get_constraint, (app::GridLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B5360, void, set_constraint, (app::GridLayoutGroup * this_ptr, app::GridLayoutGroup_Constraint__Enum value))
    IL2CPP_REGISTER_METHOD(0x024B5400, int32_t, get_constraintCount, (app::GridLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B5410, void, set_constraintCount, (app::GridLayoutGroup * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x024B5530, void, CalculateLayoutInputHorizontal, (app::GridLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B5810, void, CalculateLayoutInputVertical, (app::GridLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B5B30, void, SetLayoutHorizontal, (app::GridLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B5B40, void, SetLayoutVertical, (app::GridLayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B5B50, void, SetCellsAlongAxis, (app::GridLayoutGroup * this_ptr, int32_t axis))
} // namespace app::classes::UnityEngine::UI::GridLayoutGroup
