#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/RaceStateMachineContext_MessagesConfiguration.h>
#include <Modloader/app/structs/ScoreResult__Enum.h>

namespace app::classes::RaceStateMachineContext_MessagesConfiguration {
    IL2CPP_REGISTER_METHOD(0x0071B5A0, app::MessageProvider*, For, (app::RaceStateMachineContext_MessagesConfiguration * this_ptr, app::ScoreResult__Enum result))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RaceStateMachineContext_MessagesConfiguration * this_ptr))
} // namespace app::classes::RaceStateMachineContext_MessagesConfiguration
