#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_System_Net_WebConnection_.h>
#include <Modloader/app/structs/WebConnection.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Net_WebConnection_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Net_WebConnection_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_Net_WebConnection_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04725E38, List_1_System_Net_WebConnection___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Net_WebConnection_ * this_ptr, app::WebConnection* item))
    IL2CPP_REGISTER_METHODINFO(0x0474CC68, List_1_System_Net_WebConnection__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Net_WebConnection_, GetEnumerator, (app::List_1_System_Net_WebConnection_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477AF70, List_1_System_Net_WebConnection__GetEnumerator__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_System_Net_WebConnection_
