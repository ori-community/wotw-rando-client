#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SpiderBossTurningTimelineBehaviour.h>

namespace app::classes::SpiderBossTurningTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x011BB5A0, void, OnEnter, app::SpiderBossTurningTimelineBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011B3F30, void, OnExit, app::SpiderBossTurningTimelineBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011BB720, void, ctor, app::SpiderBossTurningTimelineBehaviour* this_ptr)
} // namespace app::classes::SpiderBossTurningTimelineBehaviour
