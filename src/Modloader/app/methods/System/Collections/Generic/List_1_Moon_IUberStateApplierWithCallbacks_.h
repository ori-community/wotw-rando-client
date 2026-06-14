#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IUberStateApplierWithCallbacks.h>
#include <Modloader/app/structs/List_1_Moon_IUberStateApplierWithCallbacks_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_IUberStateApplierWithCallbacks_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_IUberStateApplierWithCallbacks_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Moon_IUberStateApplierWithCallbacks_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_Moon_IUberStateApplierWithCallbacks_* this_ptr, app::IUberStateApplierWithCallbacks* item)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_Moon_IUberStateApplierWithCallbacks_* this_ptr, app::IUberStateApplierWithCallbacks* item)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_Moon_IUberStateApplierWithCallbacks_,
        GetEnumerator,
        app::List_1_Moon_IUberStateApplierWithCallbacks_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_IUberStateApplierWithCallbacks_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_IUberStateApplierWithCallbacks_
