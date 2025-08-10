#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiderlingNPCEntity.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SpiderlingNPCEntity {
    IL2CPP_REGISTER_METHOD(0x011C6C20, app::String*, get_DialogActorName, app::SpiderlingNPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C6CA0, app::String*, get_InteractionActorName, app::SpiderlingNPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C6D20, bool, get_CanEffectivelyStartInteraction, app::SpiderlingNPCEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004173E0, void, ctor, app::SpiderlingNPCEntity* this_ptr)
} // namespace app::classes::SpiderlingNPCEntity
