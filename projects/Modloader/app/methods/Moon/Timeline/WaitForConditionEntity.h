#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WaitForConditionEntity.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum.h>

namespace app::classes::Moon::Timeline::WaitForConditionEntity {
    IL2CPP_REGISTER_METHOD(0x00D1E020, void, OnStartPlayback, (app::WaitForConditionEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D1E100, void, OnUpdateEntity, (app::WaitForConditionEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (app::WaitForConditionEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D1E2F0, bool, EvaluateCondition, (app::WaitForConditionEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, HasFinished, (app::WaitForConditionEntity * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::RecordableParsingGroup__Enum, get_ParsingGroup, (app::WaitForConditionEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D1E410, void, ctor, (app::WaitForConditionEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::WaitForConditionEntity
