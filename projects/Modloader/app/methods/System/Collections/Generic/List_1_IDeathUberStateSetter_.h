#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_IDeathUberStateSetter_.h>
#include <Modloader/app/structs/IDeathUberStateSetter.h>
#include <Modloader/app/structs/List_1_T_Enumerator_IDeathUberStateSetter_.h>

namespace app::classes::System::Collections::Generic::List_1_IDeathUberStateSetter_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_IDeathUberStateSetter_ * this_ptr, app::IDeathUberStateSetter* item))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_IDeathUberStateSetter_ * this_ptr, app::IDeathUberStateSetter* item))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_IDeathUberStateSetter_, GetEnumerator, (app::List_1_IDeathUberStateSetter_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_IDeathUberStateSetter_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_IDeathUberStateSetter_
