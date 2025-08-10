#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/InstantiateCharacterAction.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::InstantiateCharacterAction {
    IL2CPP_REGISTER_METHOD(0x0062C8D0, void, Perform, app::InstantiateCharacterAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0062CB40, void, AfterLoad, app::InstantiateCharacterAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0062CCE0, app::String*, GetNiceName, app::InstantiateCharacterAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::InstantiateCharacterAction* this_ptr)
} // namespace app::classes::InstantiateCharacterAction
