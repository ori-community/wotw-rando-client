#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_SaveSerialize_.h>
#include <Modloader/app/structs/SaveSerialize.h>

namespace app::classes::System::Collections::Generic::HashSet_1_SaveSerialize_ {
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, app::HashSet_1_SaveSerialize_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, app::HashSet_1_SaveSerialize_* this_ptr, app::SaveSerialize* item)
} // namespace app::classes::System::Collections::Generic::HashSet_1_SaveSerialize_
