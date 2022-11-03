#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SkeetoResetAttacksInRowIfOverMaxNode {
    IL2CPP_REGISTER_METHOD(0x0075FA10, void, OnEntityInitialized, (app::SkeetoResetAttacksInRowIfOverMaxNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075FAA0, app::BehaviourStatus__Enum, OnExecute, (app::SkeetoResetAttacksInRowIfOverMaxNode * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0075FAF0, void, ctor, (app::SkeetoResetAttacksInRowIfOverMaxNode * this_ptr))
} // namespace app::classes::SkeetoResetAttacksInRowIfOverMaxNode
