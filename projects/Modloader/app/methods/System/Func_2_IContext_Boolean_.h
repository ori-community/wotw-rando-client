#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Func_2_IContext_Boolean_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::System::Func_2_IContext_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_IContext_Boolean_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x047064D0, Func_2_IContext_Boolean___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0167EC80, bool, Invoke, (app::Func_2_IContext_Boolean_ * this_ptr, app::IContext* arg))
    IL2CPP_REGISTER_METHODINFO(0x04745718, Func_2_IContext_Boolean__Invoke__MethodInfo)
} // namespace app::classes::System::Func_2_IContext_Boolean_
