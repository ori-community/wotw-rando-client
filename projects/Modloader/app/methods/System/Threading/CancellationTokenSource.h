#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/CancellationCallbackCoreWorkArguments.h>
#include <Modloader/app/structs/CancellationCallbackInfo.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/CancellationTokenRegistration.h>
#include <Modloader/app/structs/CancellationTokenSource.h>
#include <Modloader/app/structs/CancellationToken__Array.h>
#include <Modloader/app/structs/ExecutionContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SynchronizationContext.h>

namespace app::classes::System::Threading::CancellationTokenSource {
    IL2CPP_REGISTER_METHOD(0x027D94A0, void, LinkedTokenCancelDelegate, app::Object* source)
    IL2CPP_REGISTER_METHOD(0x027D95B0, bool, get_IsCancellationRequested, app::CancellationTokenSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027D95C0, bool, get_IsCancellationCompleted, app::CancellationTokenSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_IsDisposed, app::CancellationTokenSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027D95D0, void, set_ThreadIDExecutingCallbacks, app::CancellationTokenSource* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x027D95E0, int32_t, get_ThreadIDExecutingCallbacks, app::CancellationTokenSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027D95F0, app::CancellationToken, get_Token, app::CancellationTokenSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027D9610, bool, get_CanBeCanceled, app::CancellationTokenSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027D9620, app::CancellationCallbackInfo*, get_ExecutingCallback, app::CancellationTokenSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027D9630, void, ctor_1, app::CancellationTokenSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027D9650, void, ctor_2, app::CancellationTokenSource* this_ptr, bool set)
    IL2CPP_REGISTER_METHOD(0x027D9670, void, Cancel_1, app::CancellationTokenSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027D96A0, void, Cancel_2, app::CancellationTokenSource* this_ptr, bool throw_on_first_exception)
    IL2CPP_REGISTER_METHOD(0x027D96D0, void, TimerCallbackLogic, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x027D97F0, void, Dispose_1, app::CancellationTokenSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027D98A0, void, Dispose_2, app::CancellationTokenSource* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x027D9990, void, ThrowIfDisposed, app::CancellationTokenSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027D9A30, void, ThrowObjectDisposedException, )
    IL2CPP_REGISTER_METHOD(0x027D9AA0, app::CancellationTokenSource*, InternalGetStaticSource, bool set)
    IL2CPP_REGISTER_METHOD(
        0x027D9B80,
        app::CancellationTokenRegistration,
        InternalRegister,
        app::CancellationTokenSource* this_ptr,
        app::Action_1_Object_* callback,
        app::Object* state_for_callback,
        app::SynchronizationContext* target_sync_context,
        app::ExecutionContext* execution_context
    )
    IL2CPP_REGISTER_METHOD(0x027DA160, void, NotifyCancellation, app::CancellationTokenSource* this_ptr, bool throw_on_first_exception)
    IL2CPP_REGISTER_METHOD(0x027DA2D0, void, ExecuteCallbackHandlers, app::CancellationTokenSource* this_ptr, bool throw_on_first_exception)
    IL2CPP_REGISTER_METHOD(0x027DA880, void, CancellationCallbackCoreWork_OnSyncContext, app::CancellationTokenSource* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(
        0x027DA940,
        void,
        CancellationCallbackCoreWork,
        app::CancellationTokenSource* this_ptr,
        app::CancellationCallbackCoreWorkArguments args
    )
    IL2CPP_REGISTER_METHOD(0x027DAA70, app::CancellationTokenSource*, CreateLinkedTokenSource_1, app::CancellationToken token1, app::CancellationToken token2)
    IL2CPP_REGISTER_METHOD(0x027DAD80, app::CancellationTokenSource*, CreateLinkedTokenSource_2, app::CancellationToken__Array* tokens)
    IL2CPP_REGISTER_METHOD(0x027DB080, void, WaitForCallbackToComplete, app::CancellationTokenSource* this_ptr, app::CancellationCallbackInfo* callback_info)
    IL2CPP_REGISTER_METHOD(0x027DB160, void, cctor, )
} // namespace app::classes::System::Threading::CancellationTokenSource
