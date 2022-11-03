#pragma once

#include <Core/macros.h>

CORE_C_DLLEXPORT app::Vector3 world_to_ui_position(app::Vector3 const& position);
CORE_C_DLLEXPORT app::Vector3 ui_to_world_position(app::Vector3 const& position);
CORE_C_DLLEXPORT app::Vector2 world_to_ui_position_2d(app::Vector2 const& position);
CORE_C_DLLEXPORT app::Vector2 ui_to_world_position_2d(app::Vector2 const& position);
