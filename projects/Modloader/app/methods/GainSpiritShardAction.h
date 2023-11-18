#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GainSpiritShardAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::GainSpiritShardAction {
    IL2CPP_REGISTER_METHOD(0x0151E9D0, void, Perform, (app::GainSpiritShardAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::GainSpiritShardAction * this_ptr))
} // namespace app::classes::GainSpiritShardAction
