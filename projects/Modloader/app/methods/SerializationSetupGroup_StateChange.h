#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SerializationSetupGroup_StateChange {
    IL2CPP_REGISTER_METHOD(0x00AB8C10, void, SetTransition, (app::SerializationSetupGroup_StateChange * this_ptr, app::MoonTimeline* transition))
    IL2CPP_REGISTER_METHOD(0x00AB8D10, void, RefreshConditionList, (app::SerializationSetupGroup_StateChange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SerializationSetupGroup_StateChange * this_ptr))
} // namespace app::classes::SerializationSetupGroup_StateChange
