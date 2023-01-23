#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundPlayerRef__Boxed.h>
#include <Modloader/app/structs/SoundDescriptor.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::SoundPlayerRef {
    IL2CPP_REGISTER_METHOD(0x00107C00, app::SoundPlayer*, get_Player, (app::SoundPlayerRef__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00120A70, bool, get_IsNull, (app::SoundPlayerRef__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00120A80, void, Play, (app::SoundPlayerRef__Boxed * this_ptr, app::SoundDescriptor* sound_descriptor, app::Vector3 position, app::Transform* attach_to))
    IL2CPP_REGISTER_METHOD(0x00120AB0, void, FadeOut, (app::SoundPlayerRef__Boxed * this_ptr, float time, bool should_destroy_on_fade_out))
    IL2CPP_REGISTER_METHOD(0x00120B90, void, Nullify, (app::SoundPlayerRef__Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047885D8, SoundPlayerRef_Nullify__MethodInfo)
} // namespace app::classes::SoundPlayerRef
