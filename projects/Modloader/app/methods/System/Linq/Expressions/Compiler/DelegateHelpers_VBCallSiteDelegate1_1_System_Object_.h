#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DelegateHelpers_VBCallSiteDelegate1_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Linq::Expressions::Compiler::DelegateHelpers_VBCallSiteDelegate1_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DelegateHelpers_VBCallSiteDelegate1_1_System_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00DC7830, app::Object*, Invoke, (app::DelegateHelpers_VBCallSiteDelegate1_1_System_Object_ * this_ptr, app::Object* call_site, app::Object* instance, app::Object** arg1))
    IL2CPP_REGISTER_METHOD(0x0289DBB0, app::IAsyncResult*, BeginInvoke, (app::DelegateHelpers_VBCallSiteDelegate1_1_System_Object_ * this_ptr, app::Object* call_site, app::Object* instance, app::Object** arg1, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0289DBF0, app::Object*, EndInvoke, (app::DelegateHelpers_VBCallSiteDelegate1_1_System_Object_ * this_ptr, app::Object** arg1, app::IAsyncResult* result))
} // namespace app::classes::System::Linq::Expressions::Compiler::DelegateHelpers_VBCallSiteDelegate1_1_System_Object_
