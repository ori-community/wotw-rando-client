#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancellationCallbackInfo.h>
#include <Modloader/app/structs/SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_.h>

namespace app::classes::System::Threading::SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x027754B0,
        app::CancellationCallbackInfo*,
        SafeAtomicRemove,
        app::SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_* this_ptr,
        int32_t index,
        app::CancellationCallbackInfo* expected_element
    )
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Length, app::SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02775470,
        app::CancellationCallbackInfo*,
        get_Item,
        app::SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x025F4490,
        app::SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_*,
        get_Prev,
        app::SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_* this_ptr
    )
} // namespace app::classes::System::Threading::SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_
