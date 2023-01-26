#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_INonSerializedUberState_.h>
#include <Modloader/app/structs/INonSerializedUberState.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_Moon_INonSerializedUberState_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_INonSerializedUberState_ {
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_Moon_INonSerializedUberState_ * this_ptr, app::INonSerializedUberState* item))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_INonSerializedUberState_ * this_ptr, app::INonSerializedUberState* item))
    IL2CPP_REGISTER_METHOD(0x025E9050, app::ReadOnlyCollection_1_Moon_INonSerializedUberState_*, AsReadOnly, (app::List_1_Moon_INonSerializedUberState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::INonSerializedUberState*, get_Item, (app::List_1_Moon_INonSerializedUberState_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_INonSerializedUberState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_INonSerializedUberState_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_INonSerializedUberState_
