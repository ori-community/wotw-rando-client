#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_DrillZone_.h>
#include <Modloader/app/structs/DrillZone.h>

namespace app::classes::System::Collections::Generic::List_1_DrillZone_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_DrillZone_ * this_ptr, app::DrillZone* item))
    IL2CPP_REGISTER_METHODINFO(0x0477D2A0, List_1_DrillZone__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_DrillZone_ * this_ptr, app::DrillZone* item))
    IL2CPP_REGISTER_METHODINFO(0x0476D7B8, List_1_DrillZone__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_DrillZone_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04760450, List_1_DrillZone___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_DrillZone_
