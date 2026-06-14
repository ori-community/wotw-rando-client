#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/DropSlugVariationEntity.h>

namespace app::classes::DropSlugVariationEntity {
    IL2CPP_REGISTER_METHOD(0x00BE61D0, float, get_DistanceToPredictedCharacterX, app::DropSlugVariationEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE62D0, float, get_SignedDistanceToCharacterY, app::DropSlugVariationEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE63C0, void, OnEnable, app::DropSlugVariationEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE6640, void, OnDisable, app::DropSlugVariationEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE68D0, void, Die, app::DropSlugVariationEntity* this_ptr, app::DamageDealer* damage_dealer, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x00BE3ED0, void, ctor, app::DropSlugVariationEntity* this_ptr)
} // namespace app::classes::DropSlugVariationEntity
