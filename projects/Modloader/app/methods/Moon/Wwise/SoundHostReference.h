#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoundHostReference__Boxed.h>
#include <Modloader/app/structs/ISoundHost.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SoundHostReference.h>

namespace app::classes::Moon::Wwise::SoundHostReference {
    IL2CPP_REGISTER_METHOD(0x001FE930, void, ctor, (app::SoundHostReference__Boxed * this_ptr, app::ISoundHost* host))
    IL2CPP_REGISTER_METHOD(0x001FE940, bool, get_IsValid, (app::SoundHostReference__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FE220, bool, Equals_1, (app::SoundHostReference__Boxed * this_ptr, app::SoundHostReference other))
    IL2CPP_REGISTER_METHOD(0x001FE950, bool, Equals_2, (app::SoundHostReference__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x001FE3A0, int32_t, GetHashCode, (app::SoundHostReference__Boxed * this_ptr))
} // namespace app::classes::Moon::Wwise::SoundHostReference
