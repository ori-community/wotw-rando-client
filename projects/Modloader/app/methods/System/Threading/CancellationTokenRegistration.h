#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancellationCallbackInfo.h>
#include <Modloader/app/structs/CancellationTokenRegistration.h>
#include <Modloader/app/structs/CancellationTokenRegistration__Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_.h>

namespace app::classes::System::Threading::CancellationTokenRegistration {
    IL2CPP_REGISTER_METHOD(
        0x00151540,
        void,
        ctor,
        app::CancellationTokenRegistration__Boxed* this_ptr,
        app::CancellationCallbackInfo* callback_info,
        app::SparselyPopulatedArrayAddInfo_1_CancellationCallbackInfo_ registration_info
    )
    IL2CPP_REGISTER_METHOD(0x00206D50, bool, TryDeregister, app::CancellationTokenRegistration__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00206D60, void, Dispose, app::CancellationTokenRegistration__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00206D70, bool, Equals_1, app::CancellationTokenRegistration__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x00206D80, bool, Equals_2, app::CancellationTokenRegistration__Boxed* this_ptr, app::CancellationTokenRegistration other)
    IL2CPP_REGISTER_METHOD(0x00206DB0, int32_t, GetHashCode, app::CancellationTokenRegistration__Boxed* this_ptr)
} // namespace app::classes::System::Threading::CancellationTokenRegistration
