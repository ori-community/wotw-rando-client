#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_System_Threading_AsyncLocalValueChangedArgs_1__1.h>
#include <Modloader/app/structs/Action_1_System_Threading_AsyncLocalValueChangedArgs_1_.h>
#include <Modloader/app/structs/Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/AsyncLocalValueChangedArgs_1_System_Object_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_1_System_Threading_AsyncLocalValueChangedArgs_1_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_1, (app::Action_1_System_Threading_AsyncLocalValueChangedArgs_1__1 * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_2, (app::Action_1_System_Threading_AsyncLocalValueChangedArgs_1_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor_3, (app::Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2 * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D24D50, void, Invoke, (app::Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2 * this_ptr, app::AsyncLocalValueChangedArgs_1_System_Object_ obj))
    IL2CPP_REGISTER_METHOD(0x02C07E30, app::IAsyncResult*, BeginInvoke, (app::Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2 * this_ptr, app::AsyncLocalValueChangedArgs_1_System_Object_ obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_System_Threading_AsyncLocalValueChangedArgs_1__2 * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_System_Threading_AsyncLocalValueChangedArgs_1_
