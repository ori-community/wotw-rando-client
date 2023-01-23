#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ISenseInteractable.h>
#include <Modloader/app/structs/SeinSenseInteractionHandler.h>

namespace app::classes::SeinSenseInteractionHandler {
    IL2CPP_REGISTER_METHOD(0x005D9710, void, Register, (app::ISenseInteractable * sense_interactable))
    IL2CPP_REGISTER_METHOD(0x005D9840, void, Unregister, (app::ISenseInteractable * sense_interactable))
    IL2CPP_REGISTER_METHOD(0x005D9920, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x005D99F0, void, Update, (app::SeinSenseInteractionHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D9C10, void, CheckInteractions, (app::SeinSenseInteractionHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005DA070, void, ctor, (app::SeinSenseInteractionHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005DA080, void, cctor, ())
} // namespace app::classes::SeinSenseInteractionHandler
