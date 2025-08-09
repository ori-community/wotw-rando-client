#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/GasballStayInPlace.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::GasballStayInPlace {
    IL2CPP_REGISTER_METHOD(0x00421000, void, OnEntityInitialized, app::GasballStayInPlace* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004210B0, app::BehaviourStatus__Enum, OnExecute, app::GasballStayInPlace* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00421290, void, ctor, app::GasballStayInPlace* this_ptr)
} // namespace app::classes::GasballStayInPlace
