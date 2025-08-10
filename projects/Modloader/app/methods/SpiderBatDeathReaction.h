#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityTask.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SpiderBatDeathReaction.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpiderBatDeathReaction {
    IL2CPP_REGISTER_METHOD(0x00955A30, void, OnCacheSerializedComponents, app::SpiderBatDeathReaction* this_ptr, app::Entity* owner)
    IL2CPP_REGISTER_METHOD(0x00955AF0, void, OnInitializeTask, app::SpiderBatDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00955C40, void, ResetTimeline, app::SpiderBatDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00955EA0, void, OnHitGround, app::SpiderBatDeathReaction* this_ptr, app::Vector3 pos, app::Collider* col)
    IL2CPP_REGISTER_METHOD(0x00955EB0, void, StartDeathTimeline, app::SpiderBatDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00956040, void, OnEnterTask, app::SpiderBatDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00955EA0, void, OnFallingEnd, app::SpiderBatDeathReaction* this_ptr, app::EntityTask* task, app::BehaviourStatus__Enum status)
    IL2CPP_REGISTER_METHOD(0x00956780, void, OnFinishedDeathStart, app::SpiderBatDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00956790, void, TimelineFinished, app::SpiderBatDeathReaction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009567D0, app::BehaviourStatus__Enum, OnExecuteTask, app::SpiderBatDeathReaction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00956900, void, ctor, app::SpiderBatDeathReaction* this_ptr)
} // namespace app::classes::SpiderBatDeathReaction
