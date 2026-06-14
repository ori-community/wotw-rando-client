#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_SwarmAgent_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SwarmAgent.h>

namespace app::classes::System::Action_1_SwarmAgent_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, app::Action_1_SwarmAgent_* this_ptr, app::SwarmAgent* obj)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_1_SwarmAgent_* this_ptr, app::Object* object, void* method_1)
} // namespace app::classes::System::Action_1_SwarmAgent_
