#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoundDescriptor.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>

namespace app::classes::SurfaceToSoundProviderMap {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x006736B0, app::SoundDescriptor*, GetSoundForMaterial, (app::SurfaceToSoundProviderMap * this_ptr, app::SurfaceMaterialType__Enum surface_material_type, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x006739A0, app::SurfaceMaterialType__Enum, ColliderMaterialToSurfaceMaterialType, (app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x00673AD0, app::Object*, GetGenericResource, (app::SurfaceToSoundProviderMap * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x00673AF0, int32_t, GetGenericResourceId, (app::SurfaceToSoundProviderMap * this_ptr, app::Object* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SurfaceToSoundProviderMap * this_ptr))
} // namespace app::classes::SurfaceToSoundProviderMap
