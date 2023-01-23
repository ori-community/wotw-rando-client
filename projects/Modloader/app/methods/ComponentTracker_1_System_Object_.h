#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IComponentTracker_1_System_Object_.h>

namespace app::classes::ComponentTracker_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019DF500, void, Register, (app::Object * instance))
    IL2CPP_REGISTER_METHOD(0x019DF660, void, UseTracker, (app::IComponentTracker_1_System_Object_ * tracker))
    IL2CPP_REGISTER_METHOD(0x019DF770, void, cctor, ())
} // namespace app::classes::ComponentTracker_1_System_Object_
