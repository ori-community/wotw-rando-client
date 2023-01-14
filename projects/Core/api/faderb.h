#pragma once

#include <Core/macros.h>
#include <Modloader/app/structs/FaderB.h>

namespace core::api::faderb {
    CORE_DLLEXPORT app::FaderB* get();
    CORE_DLLEXPORT void fade_in(float duration);
    CORE_DLLEXPORT void fade_out(float duration);
} // namespace core::api::faderb