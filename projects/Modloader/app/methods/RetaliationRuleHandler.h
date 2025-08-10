#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/RetaliationRuleHandler.h>

namespace app::classes::RetaliationRuleHandler {
    IL2CPP_REGISTER_METHOD(0x0090EEA0, bool, get_MeetsRetaliationConditions, app::RetaliationRuleHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0090EEB0, void, set_MeetsRetaliationConditions, app::RetaliationRuleHandler* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0090EEC0, void, OnDamageTaken, app::RetaliationRuleHandler* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x0090F0F0, void, UpdateRetaliationLogic, app::RetaliationRuleHandler* this_ptr, float time_delta)
    IL2CPP_REGISTER_METHOD(0x0090F380, void, ctor, app::RetaliationRuleHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0090F620, void, cctor, )
} // namespace app::classes::RetaliationRuleHandler
