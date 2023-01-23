#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlaymodeEnteredEvent.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/DatadogEvent.h>

namespace app::classes::PlaymodeEnteredEvent {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_TimeTaken, (app::PlaymodeEnteredEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_TimeTaken, (app::PlaymodeEnteredEvent * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Scene, (app::PlaymodeEnteredEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Scene, (app::PlaymodeEnteredEvent * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02EA0730, app::DatadogEvent*, GetCompatibleEvent, (app::PlaymodeEnteredEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlaymodeEnteredEvent * this_ptr))
} // namespace app::classes::PlaymodeEnteredEvent
