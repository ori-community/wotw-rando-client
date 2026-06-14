#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/ExecutionContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ThreadHelper.h>

namespace app::classes::System::Threading::ThreadHelper {
    IL2CPP_REGISTER_METHOD(0x023443E0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::ThreadHelper* this_ptr, app::Delegate* start)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, SetExecutionContextHelper, app::ThreadHelper* this_ptr, app::ExecutionContext* ec)
    IL2CPP_REGISTER_METHOD(0x02344540, void, ThreadStart_Context, app::Object* state)
    IL2CPP_REGISTER_METHOD(0x023446A0, void, ThreadStart_1, app::ThreadHelper* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x023447E0, void, ThreadStart_2, app::ThreadHelper* this_ptr)
} // namespace app::classes::System::Threading::ThreadHelper
