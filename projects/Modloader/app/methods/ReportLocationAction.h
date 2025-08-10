#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ReportLocationAction.h>

namespace app::classes::ReportLocationAction {
    IL2CPP_REGISTER_METHOD(0x00904670, void, Perform, app::ReportLocationAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::ReportLocationAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009047D0, void, cctor, )
} // namespace app::classes::ReportLocationAction
