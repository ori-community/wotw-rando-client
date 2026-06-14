#pragma once

#include <Core/macros.h>
#include <Modloader/app/structs/FaderB.h>

namespace core::api::faderb {
    CORE_DLLEXPORT app::FaderB* get();
    CORE_DLLEXPORT void fade_to_game_invisible(float duration);
    CORE_DLLEXPORT void fade_to_game_visible(float duration);
    CORE_DLLEXPORT void set_black_screen_instantly();
    CORE_DLLEXPORT void set_skip_black_screen_cleanup(bool do_cleanup);
} // namespace core::api::faderb
