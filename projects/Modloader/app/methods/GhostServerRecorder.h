#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GhostServerRecorder.h>
#include <Modloader/app/structs/Action_1_Byte_.h>
#include <Modloader/app/structs/Rigidbody__Array.h>
#include <Modloader/app/structs/ServerConfigurationProperties.h>
#include <Modloader/app/structs/MoonGuid__Array.h>

namespace app::classes::GhostServerRecorder {
    IL2CPP_REGISTER_METHOD(0x007E7A20, bool, get_Available, (app::GhostServerRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E7A30, void, StartRecording, (app::GhostServerRecorder * this_ptr, app::Action_1_Byte_* callback, app::Rigidbody__Array* rigid_bodies, app::ServerConfigurationProperties config, app::MoonGuid__Array* targets))
    IL2CPP_REGISTER_METHOD(0x007E7BF0, void, SetUpPluguis, (app::GhostServerRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E7EF0, void, FixedUpdate, (app::GhostServerRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E8240, void, ProcessFrame, (app::GhostServerRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E83B0, bool, SomeRigidbodyIsAwake, (app::GhostServerRecorder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E8520, void, ctor, (app::GhostServerRecorder * this_ptr))
} // namespace app::classes::GhostServerRecorder
