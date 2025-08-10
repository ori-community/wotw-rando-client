#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::YouCanLeaveYourHatOn {
    IL2CPP_REGISTER_METHOD(0x01C5C870, app::String*, FindName, app::Object_1* o)
    IL2CPP_REGISTER_METHOD(0x01C5CD40, bool, DebugMenuPrintReport, )
    IL2CPP_REGISTER_METHOD(0x01C5CDC0, bool, DebugMenuPrintDontDestroyOnLoad, )
    IL2CPP_REGISTER_METHOD(0x01C5D660, void, PrintReport, app::String* report_name)
} // namespace app::classes::YouCanLeaveYourHatOn
