#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Expression_SwitchCaseProxy.h>
#include <Modloader/app/structs/SwitchCase.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>

namespace app::classes::System::Linq::Expressions::Expression_SwitchCaseProxy {
    IL2CPP_REGISTER_METHOD(0x022C7540, void, ctor, (app::Expression_SwitchCaseProxy * this_ptr, app::SwitchCase* node))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::Expression*, get_Body, (app::Expression_SwitchCaseProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, get_TestValues, (app::Expression_SwitchCaseProxy * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Expression_SwitchCaseProxy
