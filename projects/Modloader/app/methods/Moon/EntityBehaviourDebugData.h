#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityBehaviourDebugData.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::EntityBehaviourDebugData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_BriefInfo, app::EntityBehaviourDebugData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121E060, void, set_BriefInfo, app::EntityBehaviourDebugData* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_DetailedInfo, app::EntityBehaviourDebugData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121E100, void, set_DetailedInfo, app::EntityBehaviourDebugData* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0121E1A0, void, Clear, app::EntityBehaviourDebugData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0121E2B0, void, ctor, app::EntityBehaviourDebugData* this_ptr)
} // namespace app::classes::Moon::EntityBehaviourDebugData
