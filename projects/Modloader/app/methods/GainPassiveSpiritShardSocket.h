#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GainPassiveSpiritShardSocket.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::GainPassiveSpiritShardSocket {
    IL2CPP_REGISTER_METHOD(0x0151E910, void, Perform, app::GainPassiveSpiritShardSocket* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::GainPassiveSpiritShardSocket* this_ptr)
} // namespace app::classes::GainPassiveSpiritShardSocket
