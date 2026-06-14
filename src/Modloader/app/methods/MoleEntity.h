#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoleEntity.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MoleEntity {
    IL2CPP_REGISTER_METHOD(0x01331CE0, app::String*, get_DialogActorName, app::MoleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01331D60, app::String*, get_InteractionActorName, app::MoleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01331DE0, bool, get_CanEffectivelyStartInteraction, app::MoleEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004173E0, void, ctor, app::MoleEntity* this_ptr)
} // namespace app::classes::MoleEntity
