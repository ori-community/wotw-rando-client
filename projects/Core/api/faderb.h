#pragma once

#include <Core/macros.h>
#include <Modloader/app/structs/FaderB.h>

namespace faderb {
    CORE_DLLEXPORT app::FaderB* get();
    CORE_DLLEXPORT void fade_in(float duration);
    CORE_DLLEXPORT void fade_out(float duration);
} // namespace faderb