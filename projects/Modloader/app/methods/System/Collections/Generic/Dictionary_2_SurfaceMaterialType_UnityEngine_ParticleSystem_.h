#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_SurfaceMaterialType_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ * this_ptr, app::SurfaceMaterialType__Enum key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ * this_ptr, app::SurfaceMaterialType__Enum key, app::ParticleSystem* value))
    IL2CPP_REGISTER_METHOD(0x02C35530, app::ParticleSystem*, get_Item, (app::Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ * this_ptr, app::SurfaceMaterialType__Enum key))
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_SurfaceMaterialType_UnityEngine_ParticleSystem_, GetEnumerator, (app::Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_SurfaceMaterialType_UnityEngine_ParticleSystem_
