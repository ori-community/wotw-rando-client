#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReportCommentsContainer.h>

namespace app::classes::Moon::Telemetry::Performance::ReportCommentsContainer {
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IsChanged, app::ReportCommentsContainer* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsChanged, app::ReportCommentsContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E39C90, void, ctor, app::ReportCommentsContainer* this_ptr)
} // namespace app::classes::Moon::Telemetry::Performance::ReportCommentsContainer
