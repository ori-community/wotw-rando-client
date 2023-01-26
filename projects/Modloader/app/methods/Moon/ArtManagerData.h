#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArtManagerData.h>

namespace app::classes::Moon::ArtManagerData {
    IL2CPP_REGISTER_METHOD(0x0133CEF0, void, ctor, (app::ArtManagerData * this_ptr, int32_t current_mode_index, int32_t dressing_mode_index, int32_t solids_mode_index))
}
