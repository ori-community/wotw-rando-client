#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IEnumerable_1_MessageDescriptor_.h>
#include <Modloader/app/structs/DifficultyModeMessageProvider.h>

namespace app::classes::DifficultyModeMessageProvider {
    IL2CPP_REGISTER_METHOD(0x00B92410, app::IEnumerable_1_MessageDescriptor_*, GetMessages, (app::DifficultyModeMessageProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::DifficultyModeMessageProvider * this_ptr))
} // namespace app::classes::DifficultyModeMessageProvider
