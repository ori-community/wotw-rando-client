#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoundBankEntry.h>

namespace app::classes::Moon::Wwise::SoundBankEntry {
    IL2CPP_REGISTER_METHOD(0x0270B420, void, Load, app::SoundBankEntry* this_ptr, bool async)
    IL2CPP_REGISTER_METHOD(0x0270B650, void, Unload, app::SoundBankEntry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SoundBankEntry* this_ptr)
} // namespace app::classes::Moon::Wwise::SoundBankEntry
