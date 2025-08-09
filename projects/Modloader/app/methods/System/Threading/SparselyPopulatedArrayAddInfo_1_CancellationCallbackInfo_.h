#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo___Boxed.h>
#include <Modloader/app/structs/SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_.h>

namespace app::classes::System::Threading::SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_ {
    IL2CPP_REGISTER_METHOD(
        0x00107C00,
        app::SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_*,
        get_Source,
        app::SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_Index, app::SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo___Boxed* this_ptr)
} // namespace app::classes::System::Threading::SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_
