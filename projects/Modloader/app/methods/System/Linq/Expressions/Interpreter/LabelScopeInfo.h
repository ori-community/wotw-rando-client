#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LabelScopeInfo.h>
#include <Modloader/app/structs/LabelInfo.h>
#include <Modloader/app/structs/LabelScopeKind__Enum.h>
#include <Modloader/app/structs/LabelTarget.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LabelScopeInfo {
    IL2CPP_REGISTER_METHOD(0x01CE43D0, void, ctor, (app::LabelScopeInfo * this_ptr, app::LabelScopeInfo* parent, app::LabelScopeKind__Enum kind))
    IL2CPP_REGISTER_METHOD(0x01CE43E0, bool, get_CanJumpInto, (app::LabelScopeInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE43F0, bool, ContainsTarget, (app::LabelScopeInfo * this_ptr, app::LabelTarget* target))
    IL2CPP_REGISTER_METHOD(0x01CE4510, bool, TryGetLabelInfo, (app::LabelScopeInfo * this_ptr, app::LabelTarget* target, app::LabelInfo** info))
    IL2CPP_REGISTER_METHOD(0x01CE45D0, void, AddLabelInfo, (app::LabelScopeInfo * this_ptr, app::LabelTarget* target, app::LabelInfo* info))
} // namespace app::classes::System::Linq::Expressions::Interpreter::LabelScopeInfo
