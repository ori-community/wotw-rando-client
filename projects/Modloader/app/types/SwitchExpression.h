#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwitchExpression__Class.h>
#include <Modloader/app/structs/SwitchExpression.h>

namespace app::classes::types {
    namespace SwitchExpression {
        inline app::SwitchExpression__Class** type_info = (app::SwitchExpression__Class**)(modloader::win::memory::resolve_rva(0x047371A0));
        inline app::SwitchExpression__Class* get_class() {
            return il2cpp::get_class<app::SwitchExpression__Class>(type_info, "System.Linq.Expressions", "SwitchExpression");
        }
        inline app::SwitchExpression* create() {
            return il2cpp::create_object<app::SwitchExpression>(get_class());
        }
    } // namespace SwitchExpression
} // namespace app::classes::types
