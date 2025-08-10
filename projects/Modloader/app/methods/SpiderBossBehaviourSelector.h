#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SpiderBossBehaviourSelector.h>
#include <Modloader/app/structs/SpiderBossBehaviourZone__Enum.h>

namespace app::classes::SpiderBossBehaviourSelector {
    IL2CPP_REGISTER_METHOD(0x00969290, app::SpiderBossBehaviourZone__Enum, GetEnumValue, app::SpiderBossBehaviourSelector* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00969410, void, ctor, app::SpiderBossBehaviourSelector* this_ptr)
} // namespace app::classes::SpiderBossBehaviourSelector
