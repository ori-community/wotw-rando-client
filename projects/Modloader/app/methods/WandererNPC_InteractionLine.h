#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WandererNPC_InteractionLine.h>

namespace app::classes::WandererNPC_InteractionLine {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WandererNPC_InteractionLine* this_ptr)
}
