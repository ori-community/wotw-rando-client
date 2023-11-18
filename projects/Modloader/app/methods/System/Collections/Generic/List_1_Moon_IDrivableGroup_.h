#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_IDrivableGroup_.h>
#include <Modloader/app/structs/IDrivableGroup.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_IDrivableGroup_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_IDrivableGroup_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Moon_IDrivableGroup_ * this_ptr, app::IDrivableGroup* item))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_IDrivableGroup_ * this_ptr, app::IDrivableGroup* item))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_IDrivableGroup_
