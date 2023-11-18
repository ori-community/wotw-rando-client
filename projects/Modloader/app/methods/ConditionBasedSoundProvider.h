#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoundDescriptor.h>
#include <Modloader/app/structs/ConditionBasedSoundProvider.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ConditionBasedSoundProvider {
    IL2CPP_REGISTER_METHOD(0x011E3F60, app::SoundDescriptor*, GetSound, (app::ConditionBasedSoundProvider * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011E4080, void, ctor, (app::ConditionBasedSoundProvider * this_ptr))
} // namespace app::classes::ConditionBasedSoundProvider
