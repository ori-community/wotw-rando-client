#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/SneezeSlugSettings.h>

namespace app::classes::SneezeSlugSettings {
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_GetSneezingSpeed, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_GetSneezingCooldown, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00724020, float, get_GetSneezingRange, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_GetRunningRange, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_GetCloudAttackRange, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A28F40, float, get_GetCloudAttackSpeed, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_IsBurrowingEnabled, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008682A0, float, get_GetBurrowingCooldown, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091E0B0, float, get_GetBurrowingSpeed, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDFDE0, void, OnDrawGizmos, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EE0020, void, ctor, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::SneezeSlugSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::SneezeSlugSettings* this_ptr)
} // namespace app::classes::SneezeSlugSettings
