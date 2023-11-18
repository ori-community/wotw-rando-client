#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Data::Listeners_1_TElem__Func_2_System_Object_System_Object_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0167EC80, bool, Invoke, (app::Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean_ * this_ptr, app::Object* arg1))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean_ * this_ptr, app::Object* arg1, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Data::Listeners_1_TElem__Func_2_System_Object_System_Object_System_Boolean_
