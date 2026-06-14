#pragma once
#include <Core/macros.h>
#include <Modloader/app/structs/ControlScheme__Enum.h>

namespace core::api::input {
    CORE_DLLEXPORT app::ControlScheme__Enum get_current_control_scheme();
}
