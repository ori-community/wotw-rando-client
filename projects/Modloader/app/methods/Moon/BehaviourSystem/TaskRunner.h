#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ITask.h>

namespace app::classes::Moon::BehaviourSystem::TaskRunner {
    IL2CPP_REGISTER_METHOD(0x03011AC0, app::BehaviourStatus__Enum, ExecuteTask, app::ITask* task, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x03011CC0, void, InterruptTask, app::ITask* task, app::IContext* context, app::BehaviourStatus__Enum status, bool auto_execute)
} // namespace app::classes::Moon::BehaviourSystem::TaskRunner
