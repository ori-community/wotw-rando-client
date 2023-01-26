#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SparselyPopulatedArray_1_CancellationCallbackInfo_.h>
#include <Modloader/app/structs/CancellationCallbackInfo.h>
#include <Modloader/app/structs/SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_.h>
#include <Modloader/app/structs/SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_.h>

namespace app::classes::System::Threading::SparselyPopulatedArray_1_CancellationCallbackInfo_ {
    IL2CPP_REGISTER_METHOD(0x02775520, void, ctor, (app::SparselyPopulatedArray_1_CancellationCallbackInfo_ * this_ptr, int32_t initial_size))
    IL2CPP_REGISTER_METHOD(0x02775670, app::SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_, Add, (app::SparselyPopulatedArray_1_CancellationCallbackInfo_ * this_ptr, app::CancellationCallbackInfo* element))
    IL2CPP_REGISTER_METHOD(0x02775660, app::SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_*, get_Tail, (app::SparselyPopulatedArray_1_CancellationCallbackInfo_ * this_ptr))
} // namespace app::classes::System::Threading::SparselyPopulatedArray_1_CancellationCallbackInfo_
