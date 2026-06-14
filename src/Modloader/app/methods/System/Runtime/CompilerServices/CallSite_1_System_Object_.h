#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CallSiteBinder.h>
#include <Modloader/app/structs/CallSite_1_System_Object_.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::CompilerServices::CallSite_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0276D310, app::Object*, get_Update, app::CallSite_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0276D380, void, ctor_1, app::CallSite_1_System_Object_* this_ptr, app::CallSiteBinder* binder)
    IL2CPP_REGISTER_METHOD(0x0276D3C0, void, ctor_2, app::CallSite_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0276D3E0, app::CallSite_1_System_Object_*, CreateMatchMaker, app::CallSite_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0276D4F0, app::CallSite_1_System_Object_*, Create, app::CallSiteBinder* binder)
    IL2CPP_REGISTER_METHOD(0x0276D770, app::Object*, GetUpdateDelegate_1, app::CallSite_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0276D7E0, app::Object*, GetUpdateDelegate_2, app::CallSite_1_System_Object_* this_ptr, app::Object** addr)
    IL2CPP_REGISTER_METHOD(0x0276D820, void, AddRule, app::CallSite_1_System_Object_* this_ptr, app::Object* new_rule)
    IL2CPP_REGISTER_METHOD(0x0276D970, void, MoveRule, app::CallSite_1_System_Object_* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x0276DA30, app::Object*, MakeUpdateDelegate, app::CallSite_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0276DB90, app::Object*, CreateCustomUpdateDelegate, app::CallSite_1_System_Object_* this_ptr, app::MethodInfo_1* invoke)
    IL2CPP_REGISTER_METHOD(0x0276FE10, app::Object*, CreateCustomNoMatchDelegate, app::CallSite_1_System_Object_* this_ptr, app::MethodInfo_1* invoke)
    IL2CPP_REGISTER_METHOD(0x02770360, app::Expression*, Convert, app::Expression* arg, app::Type* type)
} // namespace app::classes::System::Runtime::CompilerServices::CallSite_1_System_Object_
