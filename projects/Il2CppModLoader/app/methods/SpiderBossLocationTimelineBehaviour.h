#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpiderBossLocationTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x011B26C0, app::String*, get_Info, (app::SpiderBossLocationTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B2830, app::MoonTimeline*, GetTimeline, (app::SpiderBossLocationTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B1480, void, ctor, (app::SpiderBossLocationTimelineBehaviour * this_ptr))
} // namespace app::classes::SpiderBossLocationTimelineBehaviour
