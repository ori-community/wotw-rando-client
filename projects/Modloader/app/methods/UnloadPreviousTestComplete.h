#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnloadPreviousTestComplete.h>

namespace app::classes::UnloadPreviousTestComplete {
    IL2CPP_REGISTER_METHOD(0x013ABFA0, void, Start, (app::UnloadPreviousTestComplete * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UnloadPreviousTestComplete * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AC050, void, cctor, ())
} // namespace app::classes::UnloadPreviousTestComplete
