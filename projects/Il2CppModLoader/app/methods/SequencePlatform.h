#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SequencePlatform {
    IL2CPP_REGISTER_METHOD(0x00AB5E50, void, OnEnable, (app::SequencePlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB5E60, void, set_Activated, (app::SequencePlatform * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_Activated, (app::SequencePlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB5F30, void, Awake, (app::SequencePlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB5FD0, void, OnDestroy, (app::SequencePlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB6070, void, Start, (app::SequencePlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB6160, void, FixedUpdate, (app::SequencePlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB6250, void, OnSequenceAppear, (app::SequencePlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB62B0, void, OnCollisionEnter, (app::SequencePlatform * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00AB65A0, void, HideThePlatforms, (app::SequencePlatform * this_ptr, app::HashSet_1_SequencePlatform_* platforms_to_ignore))
    IL2CPP_REGISTER_METHOD(0x00AB66D0, app::IEnumerator*, PerformNextPlatform, (app::SequencePlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB6820, app::IEnumerator*, PerformVanish, (app::SequencePlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB6970, void, Serialize, (app::SequencePlatform * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsSuspended, (app::SequencePlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049C030, void, set_IsSuspended, (app::SequencePlatform * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF610, app::SuspendableMask__Enum, get_Mask, (app::SequencePlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB6A30, void, set_Mask, (app::SequencePlatform * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00AB6AE0, void, ctor, (app::SequencePlatform * this_ptr))
} // namespace app::classes::SequencePlatform
