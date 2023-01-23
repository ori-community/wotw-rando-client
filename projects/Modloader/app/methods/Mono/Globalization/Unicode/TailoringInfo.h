#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TailoringInfo.h>

namespace app::classes::Mono::Globalization::Unicode::TailoringInfo {
    IL2CPP_REGISTER_METHOD(0x023C5470, void, ctor, (app::TailoringInfo * this_ptr, int32_t lcid, int32_t tailoring_index, int32_t tailoring_count, bool french_sort))
}
