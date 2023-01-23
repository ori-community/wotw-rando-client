#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ExecutionContext_Reader__Boxed.h>
#include <Modloader/app/structs/ExecutionContext.h>
#include <Modloader/app/structs/SynchronizationContext.h>
#include <Modloader/app/structs/LogicalCallContext_Reader.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncLocal.h>

namespace app::classes::System::Threading::ExecutionContext_Reader {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::ExecutionContext_Reader__Boxed * this_ptr, app::ExecutionContext* ec))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::ExecutionContext*, DangerousGetRawExecutionContext, (app::ExecutionContext_Reader__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D5C40, bool, get_IsNull, (app::ExecutionContext_Reader__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00206E90, bool, IsDefaultFTContext, (app::ExecutionContext_Reader__Boxed * this_ptr, bool ignore_sync_ctx))
    IL2CPP_REGISTER_METHOD(0x00206EB0, bool, get_IsFlowSuppressed, (app::ExecutionContext_Reader__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00206ED0, app::SynchronizationContext*, get_SynchronizationContext, (app::ExecutionContext_Reader__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00206EE0, app::SynchronizationContext*, get_SynchronizationContextNoFlow, (app::ExecutionContext_Reader__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00206EF0, app::LogicalCallContext_Reader, get_LogicalCallContext, (app::ExecutionContext_Reader__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00206F10, app::Object*, GetLocalValue, (app::ExecutionContext_Reader__Boxed * this_ptr, app::IAsyncLocal* local))
    IL2CPP_REGISTER_METHOD(0x00206F20, bool, HasSameLocalValues, (app::ExecutionContext_Reader__Boxed * this_ptr, app::ExecutionContext* other))
} // namespace app::classes::System::Threading::ExecutionContext_Reader
