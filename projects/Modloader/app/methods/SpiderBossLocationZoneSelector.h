#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SpiderBossLocationZoneSelector.h>
#include <Modloader/app/structs/SpiderBossLocationZone__Enum.h>

namespace app::classes::SpiderBossLocationZoneSelector {
    IL2CPP_REGISTER_METHOD(0x011B44A0, app::SpiderBossLocationZone__Enum, GetEnumValue, app::SpiderBossLocationZoneSelector* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011B4650, void, ctor, app::SpiderBossLocationZoneSelector* this_ptr)
} // namespace app::classes::SpiderBossLocationZoneSelector
