#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LagoonContactSwitchGroupAction.h>

namespace app::classes::LagoonContactSwitchGroupAction {
    IL2CPP_REGISTER_METHOD(0x00F01420, void, OnEnable, (app::LagoonContactSwitchGroupAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F015C0, void, OnDisable, (app::LagoonContactSwitchGroupAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F01760, void, Start, (app::LagoonContactSwitchGroupAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F01B30, void, OnActivateAction, (app::LagoonContactSwitchGroupAction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478AC98, LagoonContactSwitchGroupAction_OnActivateAction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F01BE0, void, OnDeactivateAction, (app::LagoonContactSwitchGroupAction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744950, LagoonContactSwitchGroupAction_OnDeactivateAction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00845430, void, OnRestoreCheckpoint, (app::LagoonContactSwitchGroupAction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04734A48, LagoonContactSwitchGroupAction_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F01BF0, void, ctor, (app::LagoonContactSwitchGroupAction * this_ptr))
} // namespace app::classes::LagoonContactSwitchGroupAction
