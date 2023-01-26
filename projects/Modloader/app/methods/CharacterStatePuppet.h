#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterStatePuppet.h>
#include <Modloader/app/structs/GhostPlayer.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IPuppet.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::CharacterStatePuppet {
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_UniqueRecordingId, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01315BF0, bool, get_IsRecording, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01315C10, app::MoonAnimator*, get_SeinAnimator, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::IPuppet*, get_PuppetMaster, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01315CA0, void, OnInitializeLivePuppetMaster, (app::CharacterStatePuppet * this_ptr, app::IPuppet* puppet_master))
    IL2CPP_REGISTER_METHOD(0x01315CD0, void, OnInitializeGhostPuppetMaster, (app::CharacterStatePuppet * this_ptr, app::GhostPlayer* player))
    IL2CPP_REGISTER_METHOD(0x01316100, void, OnPoolDespawned, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01316130, void, ctor, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_1, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01547B40, void, RecordValue, (app::CharacterStatePuppet * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_2, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_3, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_4, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_5, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_6, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_7, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_8, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_9, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_10, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_11, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_12, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_13, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_14, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_15, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_16, (app::CharacterStatePuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::IMoonTypeResolver*, GetResolverForType_17, (app::CharacterStatePuppet * this_ptr))
} // namespace app::classes::CharacterStatePuppet
