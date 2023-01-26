#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_UnityEngine_ParticleSystem_System_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ParticleSystem_System_Boolean_.h>
#include <Modloader/app/structs/ParticleSystem.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_ParticleSystem_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x02BBF070, bool, get_Item, (app::Dictionary_2_UnityEngine_ParticleSystem_System_Boolean_ * this_ptr, app::ParticleSystem* key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_UnityEngine_ParticleSystem_System_Boolean_ * this_ptr, app::ParticleSystem* key, bool value))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_ParticleSystem_System_Boolean_*, get_Keys, (app::Dictionary_2_UnityEngine_ParticleSystem_System_Boolean_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_UnityEngine_ParticleSystem_System_Boolean_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_ParticleSystem_System_Boolean_
