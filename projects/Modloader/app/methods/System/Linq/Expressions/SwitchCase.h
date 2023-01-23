#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SwitchCase.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_Expression_.h>

namespace app::classes::System::Linq::Expressions::SwitchCase {
    IL2CPP_REGISTER_METHOD(0x0231B8E0, void, ctor, (app::SwitchCase * this_ptr, app::Expression* body, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_* test_values))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, get_TestValues, (app::SwitchCase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Expression*, get_Body, (app::SwitchCase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC4ED0, app::String*, ToString, (app::SwitchCase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC4EE0, app::SwitchCase*, Update, (app::SwitchCase * this_ptr, app::IEnumerable_1_System_Linq_Expressions_Expression_* test_values, app::Expression* body))
} // namespace app::classes::System::Linq::Expressions::SwitchCase
