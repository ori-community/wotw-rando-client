#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoundBankCollection.h>

namespace app::classes::Moon::Wwise::SoundBankCollection {
    IL2CPP_REGISTER_METHOD(0x0270B1F0, void, Load, app::SoundBankCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0270B310, void, Unload, app::SoundBankCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, app::SoundBankCollection* this_ptr)
} // namespace app::classes::Moon::Wwise::SoundBankCollection
