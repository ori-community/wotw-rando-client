#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpiderBossBottomDamageDealerEnabler.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SpiderBossBottomDamageDealerEnabler {
    IL2CPP_REGISTER_METHOD(0x009699D0, void, Perform, (app::SpiderBossBottomDamageDealerEnabler * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SpiderBossBottomDamageDealerEnabler * this_ptr))
} // namespace app::classes::SpiderBossBottomDamageDealerEnabler
