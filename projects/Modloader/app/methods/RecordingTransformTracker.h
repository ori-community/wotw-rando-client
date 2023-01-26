#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RecordingTransformTracker.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum.h>
#include <Modloader/app/structs/TrackingExclusions.h>

namespace app::classes::RecordingTransformTracker {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_TrackTranformChangesForRecording, (app::RecordingTransformTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::RecordableParsingGroup__Enum, get_ParsingGroup, (app::RecordingTransformTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FB230, app::TrackingExclusions, get_TrackingExclusions, (app::RecordingTransformTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::RecordingTransformTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FB240, void, Awake, (app::RecordingTransformTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::RecordingTransformTracker * this_ptr))
} // namespace app::classes::RecordingTransformTracker
