#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/ScenariosParticleSystemPlugin_TrackingID.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_ {
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_* this_ptr,
        app::ParticleSystem* key,
        app::ScenariosParticleSystemPlugin_TrackingID* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BD24D0,
        app::ScenariosParticleSystemPlugin_TrackingID*,
        get_Item,
        app::Dictionary_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_* this_ptr,
        app::ParticleSystem* key
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_ParticleSystem_ScenariosParticleSystemPlugin_TrackingID_
