#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NPCEntity.h>
#include <Modloader/app/structs/NPCEntityPlaceholder_NPCInteractionSettings__Boxed.h>

namespace app::classes::NPCEntityPlaceholder_NPCInteractionSettings {
    IL2CPP_REGISTER_METHOD(0x0011A9C0, void, Apply, app::NPCEntityPlaceholder_NPCInteractionSettings__Boxed* this_ptr, app::NPCEntity* npc)
}
