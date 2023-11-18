#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Net_HttpConnection_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Net_HttpConnection_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Net_HttpConnection_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Net_HttpConnection_ {
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor, (app::List_1_System_Net_HttpConnection_ * this_ptr, app::IEnumerable_1_System_Net_HttpConnection_* collection))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Net_HttpConnection_, GetEnumerator, (app::List_1_System_Net_HttpConnection_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_System_Net_HttpConnection_
