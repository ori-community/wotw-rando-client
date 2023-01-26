#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WaitHandle.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/ManualResetEventSlim.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Threading::ManualResetEventSlim {
    IL2CPP_REGISTER_METHOD(0x027DE960, app::WaitHandle*, get_WaitHandle, (app::ManualResetEventSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027DE9A0, bool, get_IsSet, (app::ManualResetEventSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027DEA40, void, set_IsSet, (app::ManualResetEventSlim * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x027DEA70, int32_t, get_SpinCount, (app::ManualResetEventSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027DEB20, void, set_SpinCount, (app::ManualResetEventSlim * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x027DEB40, int32_t, get_Waiters, (app::ManualResetEventSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027DEBE0, void, set_Waiters, (app::ManualResetEventSlim * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x027DECE0, void, ctor_1, (app::ManualResetEventSlim * this_ptr, bool initial_state))
    IL2CPP_REGISTER_METHOD(0x027DED40, void, ctor_2, (app::ManualResetEventSlim * this_ptr, bool initial_state, int32_t spin_count))
    IL2CPP_REGISTER_METHOD(0x027DEE90, void, Initialize, (app::ManualResetEventSlim * this_ptr, bool initial_state, int32_t spin_count))
    IL2CPP_REGISTER_METHOD(0x027DEF00, void, EnsureLockObjectCreated, (app::ManualResetEventSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027DF060, bool, LazyInitializeEvent, (app::ManualResetEventSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0233B680, void, Set_1, (app::ManualResetEventSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027DF2F0, void, Set_2, (app::ManualResetEventSlim * this_ptr, bool during_cancellation))
    IL2CPP_REGISTER_METHOD(0x027DF510, bool, Wait, (app::ManualResetEventSlim * this_ptr, int32_t milliseconds_timeout, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x027DFC60, void, Dispose_1, (app::ManualResetEventSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027DFD10, void, Dispose_2, (app::ManualResetEventSlim * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x027DFE20, void, ThrowIfDisposed, (app::ManualResetEventSlim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027DFEF0, void, CancellationTokenCallback, (app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x027E0080, void, UpdateStateAtomically, (app::ManualResetEventSlim * this_ptr, int32_t new_bits, int32_t update_bits_mask))
    IL2CPP_REGISTER_METHOD(0x027E0180, int32_t, ExtractStatePortionAndShiftRight, (int32_t state, int32_t mask, int32_t right_bit_shift_count))
    IL2CPP_REGISTER_METHOD(0x027E0190, int32_t, ExtractStatePortion, (int32_t state, int32_t mask))
    IL2CPP_REGISTER_METHOD(0x027E01A0, void, cctor, ())
} // namespace app::classes::System::Threading::ManualResetEventSlim
