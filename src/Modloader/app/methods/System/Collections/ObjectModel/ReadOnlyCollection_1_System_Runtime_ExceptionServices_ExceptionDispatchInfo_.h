#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExceptionDispatchInfo.h>
#include <Modloader/app/structs/IList_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_ {
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count, app::ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02EC2580,
        app::ExceptionDispatchInfo*,
        get_Item,
        app::ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02B7DCF0,
        void,
        ctor,
        app::ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_* this_ptr,
        app::IList_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_* list
    )
} // namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_
