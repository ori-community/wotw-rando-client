#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_.h>
#include <Modloader/app/structs/ExceptionDispatchInfo.h>
#include <Modloader/app/structs/IEnumerable_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Runtime_ExceptionServices_ExceptionDispatchInfo_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ {
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor_1, (app::List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ * this_ptr, app::IEnumerable_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_* collection))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, (app::List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ * this_ptr, app::IEnumerable_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_* collection))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Runtime_ExceptionServices_ExceptionDispatchInfo_, GetEnumerator, (app::List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_3, (app::List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ * this_ptr, app::ExceptionDispatchInfo* item))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::ExceptionDispatchInfo*, get_Item, (app::List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_
