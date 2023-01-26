#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Object_SneezeSlugEntity_HitProtectionState_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Object_SneezeSlugEntity_HitProtectionState_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SneezeSlugEntity_HitProtectionState__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Object_SneezeSlugEntity_HitProtectionState_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Object_SneezeSlugEntity_HitProtectionState_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Object_SneezeSlugEntity_HitProtectionState_ * this_ptr, app::Object* key, app::SneezeSlugEntity_HitProtectionState__Enum value))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Object_SneezeSlugEntity_HitProtectionState_ * this_ptr, app::Object* key, app::SneezeSlugEntity_HitProtectionState__Enum value))
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_Object_SneezeSlugEntity_HitProtectionState_, GetEnumerator, (app::Dictionary_2_System_Object_SneezeSlugEntity_HitProtectionState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Object_SneezeSlugEntity_HitProtectionState_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Object_SneezeSlugEntity_HitProtectionState_
