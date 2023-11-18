#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Listeners_1_TElem_Actio_4_Syste_Objec_Syste_Objec_Syste_Int32Enu_Syste_Objec_Syste_Boolea_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Data::Listeners_1_TElem__Action_4_System_Object_System_Object_System_Int32Enum_System_Object_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Listeners_1_TElem_Action_4_System_Object_System_Object_System_Int32Enum_System_Object_System_Boolean_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02FADE80, void, Invoke, (app::Listeners_1_TElem_Action_4_System_Object_System_Object_System_Int32Enum_System_Object_System_Boolean_ * this_ptr, app::Object* arg1, app::Int32Enum__Enum arg2, app::Object* arg3, bool arg4))
    IL2CPP_REGISTER_METHOD(0x02FAE480, app::IAsyncResult*, BeginInvoke, (app::Listeners_1_TElem_Action_4_System_Object_System_Object_System_Int32Enum_System_Object_System_Boolean_ * this_ptr, app::Object* arg1, app::Int32Enum__Enum arg2, app::Object* arg3, bool arg4, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Listeners_1_TElem_Action_4_System_Object_System_Object_System_Int32Enum_System_Object_System_Boolean_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Data::Listeners_1_TElem__Action_4_System_Object_System_Object_System_Int32Enum_System_Object_System_Boolean_
