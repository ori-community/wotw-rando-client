#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrainEntityTester.h>
#include <Modloader/app/structs/Enum.h>
#include <Modloader/app/structs/Enum__Array.h>

namespace app::classes::BrainEntityTester {
    IL2CPP_REGISTER_METHOD(0x01BA4230, app::Enum__Array*, GetEntries, app::BrainEntityTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA42C0, app::Enum, Evaluate, app::BrainEntityTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_ShouldSkip, app::BrainEntityTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::BrainEntityTester* this_ptr)
} // namespace app::classes::BrainEntityTester
