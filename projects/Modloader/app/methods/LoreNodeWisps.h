#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoreNodeWisps.h>
#include <Modloader/app/structs/LoreNodeWisps_LoreStep.h>
#include <Modloader/app/structs/MessageProvider.h>

namespace app::classes::LoreNodeWisps {
    IL2CPP_REGISTER_METHOD(0x009ED350, bool, get_IsActive, (app::LoreNodeWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009ED360, void, OnEnter, (app::LoreNodeWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009ED4F0, void, UpdateState, (app::LoreNodeWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009ED530, app::LoreNodeWisps_LoreStep*, get_CurrentStep, (app::LoreNodeWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009ED700, app::MessageProvider*, get_CurrentLine, (app::LoreNodeWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0056FAC0, void, ctor, (app::LoreNodeWisps * this_ptr))
} // namespace app::classes::LoreNodeWisps
