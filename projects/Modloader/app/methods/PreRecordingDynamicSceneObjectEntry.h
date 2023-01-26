#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PreRecordingDynamicSceneObjectEntry__Boxed.h>
#include <Modloader/app/structs/IRecordable.h>

namespace app::classes::PreRecordingDynamicSceneObjectEntry {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::PreRecordingDynamicSceneObjectEntry__Boxed * this_ptr, app::IRecordable* scene_object))
}
