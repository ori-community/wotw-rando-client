#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Threading::ThreadHelper {
    IL2CPP_REGISTER_METHOD(0x023443E0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ThreadHelper * this_ptr, app::Delegate* start))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, SetExecutionContextHelper, (app::ThreadHelper * this_ptr, app::ExecutionContext* ec))
    IL2CPP_REGISTER_METHOD(0x02344540, void, ThreadStart_Context, (app::Object * state))
    IL2CPP_REGISTER_METHODINFO(0x0473EF88, ThreadHelper_ThreadStart_Context__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023446A0, void, ThreadStart_1, (app::ThreadHelper * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHODINFO(0x04796318, ThreadHelper_ThreadStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023447E0, void, ThreadStart_2, (app::ThreadHelper * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474EAD0, ThreadHelper_ThreadStart_1__MethodInfo)
} // namespace app::classes::System::Threading::ThreadHelper
