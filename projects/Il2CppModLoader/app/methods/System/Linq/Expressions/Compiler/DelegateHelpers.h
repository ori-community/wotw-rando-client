#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Compiler::DelegateHelpers {
    IL2CPP_REGISTER_METHOD(0x01FA1130, app::Type *, MakeDelegateType, (app::Type__Array * types))
    IL2CPP_REGISTER_METHOD(0x01FA1470, app::DelegateHelpers_TypeInfo *, NextTypeInfo, (app::Type * initial_arg, app::DelegateHelpers_TypeInfo * cur_type_info))
    IL2CPP_REGISTER_METHOD(0x01FA1780, app::Type *, TryMakeVBStyledCallSite, (app::Type__Array * types))
    IL2CPP_REGISTER_METHOD(0x01FA1FC0, app::Type *, MakeNewDelegate, (app::Type__Array * types))
    IL2CPP_REGISTER_METHOD(0x01FA21F0, app::Type *, GetFuncType, (app::Type__Array * types))
    IL2CPP_REGISTER_METHOD(0x01FA2770, app::Type *, GetActionType, (app::Type__Array * types))
    IL2CPP_REGISTER_METHOD(0x01FA2CE0, app::Type *, MakeNewCustomDelegate, (app::Type__Array * types))
    IL2CPP_REGISTER_METHODINFO(0x04778BE8, DelegateHelpers_1_MakeNewCustomDelegate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FA2D30, void, cctor, ())
}
