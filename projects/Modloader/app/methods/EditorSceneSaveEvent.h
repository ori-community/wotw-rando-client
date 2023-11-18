#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/DatadogEvent.h>
#include <Modloader/app/structs/EditorSceneSaveEvent.h>

namespace app::classes::EditorSceneSaveEvent {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_SceneName, (app::EditorSceneSaveEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_SceneName, (app::EditorSceneSaveEvent * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, int64_t, get_TimeTaken, (app::EditorSceneSaveEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_TimeTaken, (app::EditorSceneSaveEvent * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x02E91490, app::DatadogEvent*, GetCompatibleEvent, (app::EditorSceneSaveEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EditorSceneSaveEvent * this_ptr))
} // namespace app::classes::EditorSceneSaveEvent
