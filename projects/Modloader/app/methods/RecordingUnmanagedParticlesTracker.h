#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RecordingUnmanagedParticlesTracker.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum.h>
#include <Modloader/app/structs/TrackingExclusions.h>

namespace app::classes::RecordingUnmanagedParticlesTracker {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_TrackTranformChangesForRecording, (app::RecordingUnmanagedParticlesTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::RecordableParsingGroup__Enum, get_ParsingGroup, (app::RecordingUnmanagedParticlesTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FB250, app::TrackingExclusions, get_TrackingExclusions, (app::RecordingUnmanagedParticlesTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::RecordingUnmanagedParticlesTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FB260, void, Awake, (app::RecordingUnmanagedParticlesTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RecordingUnmanagedParticlesTracker * this_ptr))
} // namespace app::classes::RecordingUnmanagedParticlesTracker
