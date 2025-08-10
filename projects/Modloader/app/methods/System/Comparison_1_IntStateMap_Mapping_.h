#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Comparison_1_IntStateMap_Mapping_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IntStateMap_Mapping.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Comparison_1_IntStateMap_Mapping_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Comparison_1_IntStateMap_Mapping_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02B87FA0,
        int32_t,
        Invoke,
        app::Comparison_1_IntStateMap_Mapping_* this_ptr,
        app::IntStateMap_Mapping x,
        app::IntStateMap_Mapping y
    )
    IL2CPP_REGISTER_METHOD(
        0x02B89010,
        app::IAsyncResult*,
        BeginInvoke,
        app::Comparison_1_IntStateMap_Mapping_* this_ptr,
        app::IntStateMap_Mapping x,
        app::IntStateMap_Mapping y,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, app::Comparison_1_IntStateMap_Mapping_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Comparison_1_IntStateMap_Mapping_
