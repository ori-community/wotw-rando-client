#pragma once

#include <Core/enums/loading_state.h>
#include <Core/macros.h>

namespace core::api::game::loading_detection {
    CORE_DLLEXPORT LoadingState get_loading_state();
}