#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RecordingLink.h>

namespace app::classes::RecordingLink {
    IL2CPP_REGISTER_METHOD(0x008FADF0, void, BeginInteraction, app::RecordingLink* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008FAF60, void, EndInteraction, app::RecordingLink* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008FB0D0, void, ctor, app::RecordingLink* this_ptr)
} // namespace app::classes::RecordingLink
