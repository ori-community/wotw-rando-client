#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancellationCallbackCoreWorkArguments__Boxed.h>
#include <Modloader/app/structs/SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_.h>

namespace app::classes::System::Threading::CancellationCallbackCoreWorkArguments {
    IL2CPP_REGISTER_METHOD(
        0x0011D2D0,
        void,
        ctor,
        app::CancellationCallbackCoreWorkArguments__Boxed* this_ptr,
        app::SparselyPopulatedArrayFragment_1_CancellationCallbackInfo_* curr_array_fragment,
        int32_t curr_array_index
    )
}
