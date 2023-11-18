#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_DebugRendererSettings_SettingsPattern_.h>
#include <Modloader/app/structs/DebugRendererSettings_SettingsPattern.h>

namespace app::classes::System::Collections::Generic::List_1_DebugRendererSettings_SettingsPattern_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_DebugRendererSettings_SettingsPattern_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DebugRendererSettings_SettingsPattern*, get_Item, (app::List_1_DebugRendererSettings_SettingsPattern_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_DebugRendererSettings_SettingsPattern_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_DebugRendererSettings_SettingsPattern_
