#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KwolokTempLegStretch.h>

namespace app::classes::KwolokTempLegStretch {
    IL2CPP_REGISTER_METHOD(0x012FD210, void, Update, app::KwolokTempLegStretch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506160, void, ctor, app::KwolokTempLegStretch* this_ptr)
} // namespace app::classes::KwolokTempLegStretch
