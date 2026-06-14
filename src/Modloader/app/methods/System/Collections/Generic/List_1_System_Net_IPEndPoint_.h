#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IPEndPoint.h>
#include <Modloader/app/structs/IPEndPoint__Array.h>
#include <Modloader/app/structs/List_1_System_Net_IPEndPoint_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Net_IPEndPoint_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_System_Net_IPEndPoint_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_Net_IPEndPoint_* this_ptr, app::IPEndPoint* item)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::IPEndPoint__Array*, ToArray, app::List_1_System_Net_IPEndPoint_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_System_Net_IPEndPoint_
