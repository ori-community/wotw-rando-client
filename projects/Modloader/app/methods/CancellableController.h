#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancellableController.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::CancellableController {
    IL2CPP_REGISTER_METHOD(0x00B228C0, void, InitializeForTimeline, app::CancellableController* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00B229C0, void, Reset, app::CancellableController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B22A70, bool, CanCancel, app::CancellableController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B22C00, void, ctor, app::CancellableController* this_ptr)
} // namespace app::classes::CancellableController
