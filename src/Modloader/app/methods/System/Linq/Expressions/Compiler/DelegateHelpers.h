#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DelegateHelpers_TypeInfo.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Linq::Expressions::Compiler::DelegateHelpers {
    IL2CPP_REGISTER_METHOD(0x01FA1130, app::Type*, MakeDelegateType, app::Type__Array* types)
    IL2CPP_REGISTER_METHOD(0x01FA1470, app::DelegateHelpers_TypeInfo*, NextTypeInfo, app::Type* initial_arg, app::DelegateHelpers_TypeInfo* cur_type_info)
    IL2CPP_REGISTER_METHOD(0x01FA1780, app::Type*, TryMakeVBStyledCallSite, app::Type__Array* types)
    IL2CPP_REGISTER_METHOD(0x01FA1FC0, app::Type*, MakeNewDelegate, app::Type__Array* types)
    IL2CPP_REGISTER_METHOD(0x01FA21F0, app::Type*, GetFuncType, app::Type__Array* types)
    IL2CPP_REGISTER_METHOD(0x01FA2770, app::Type*, GetActionType, app::Type__Array* types)
    IL2CPP_REGISTER_METHOD(0x01FA2CE0, app::Type*, MakeNewCustomDelegate, app::Type__Array* types)
    IL2CPP_REGISTER_METHOD(0x01FA2D30, void, cctor, )
} // namespace app::classes::System::Linq::Expressions::Compiler::DelegateHelpers
