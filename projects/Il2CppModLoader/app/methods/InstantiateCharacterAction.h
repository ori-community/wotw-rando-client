#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::InstantiateCharacterAction {
    IL2CPP_REGISTER_METHOD(0x0062C8D0, void, Perform, (app::InstantiateCharacterAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0062CB40, void, AfterLoad, (app::InstantiateCharacterAction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476BE48, InstantiateCharacterAction_AfterLoad__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0062CCE0, app::String*, GetNiceName, (app::InstantiateCharacterAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::InstantiateCharacterAction * this_ptr))
} // namespace app::classes::InstantiateCharacterAction
