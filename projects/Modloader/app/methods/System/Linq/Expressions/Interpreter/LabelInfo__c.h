#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LabelInfo_c.h>
#include <Modloader/app/structs/LabelScopeInfo.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LabelInfo___c {
    IL2CPP_REGISTER_METHOD(0x01CE4270, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LabelInfo_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE43B0, app::LabelScopeInfo*, _ValidateJump_b__9_0, (app::LabelInfo_c * this_ptr, app::LabelScopeInfo* b))
    IL2CPP_REGISTER_METHODINFO(0x047628F0, LabelInfo_c__ValidateJump_b__9_0__MethodInfo)
} // namespace app::classes::System::Linq::Expressions::Interpreter::LabelInfo___c
