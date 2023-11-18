#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_MainThreadLoadingDebugger_NotifyEntry_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_MainThreadLoadingDebugger_NotifyEntry_.h>
#include <Modloader/app/structs/MainThreadLoadingDebugger_NotifyEntry.h>
#include <Modloader/app/structs/Predicate_1_MainThreadLoadingDebugger_NotifyEntry_.h>

namespace app::classes::System::Collections::Generic::List_1_MainThreadLoadingDebugger_NotifyEntry_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_MainThreadLoadingDebugger_NotifyEntry_ * this_ptr, app::MainThreadLoadingDebugger_NotifyEntry* item))
    IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, (app::List_1_MainThreadLoadingDebugger_NotifyEntry_ * this_ptr, app::Predicate_1_MainThreadLoadingDebugger_NotifyEntry_* match))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_MainThreadLoadingDebugger_NotifyEntry_, GetEnumerator, (app::List_1_MainThreadLoadingDebugger_NotifyEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_MainThreadLoadingDebugger_NotifyEntry_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_MainThreadLoadingDebugger_NotifyEntry_
