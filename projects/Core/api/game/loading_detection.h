#pragma once

#include <Core/macros.h>
#include <Core/enums/loading_state.h>

namespace game::loading_detection {
    CORE_DLLEXPORT LoadingState get_loading_state();
}