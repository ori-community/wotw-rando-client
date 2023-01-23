#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Stream_ReadWriteTask.h>
#include <Modloader/app/structs/Func_2_Object_Int32_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Task.h>

namespace app::classes::System::IO::Stream_ReadWriteTask {
    IL2CPP_REGISTER_METHOD(0x0237EDF0, void, ClearBeginState, (app::Stream_ReadWriteTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0237EE00, void, ctor, (app::Stream_ReadWriteTask * this_ptr, bool is_read, app::Func_2_Object_Int32_* function, app::Object* state, app::Stream* stream, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* callback))
    IL2CPP_REGISTER_METHOD(0x0237EF90, void, InvokeAsyncCallback, (app::Object * completed_task))
    IL2CPP_REGISTER_METHODINFO(0x0471D050, Stream_ReadWriteTask_InvokeAsyncCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0237F060, void, ITaskCompletionAction_Invoke, (app::Stream_ReadWriteTask * this_ptr, app::Task* completing_task))
} // namespace app::classes::System::IO::Stream_ReadWriteTask
