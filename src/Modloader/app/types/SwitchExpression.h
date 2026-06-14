#pragma once
#include <Modloader/app/structs/SwitchExpression.h>
#include <Modloader/app/structs/SwitchExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchExpression {
        inline app::SwitchExpression__Class** type_info() {
            static app::SwitchExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SwitchExpression__Class**)(modloader::win::memory::resolve_rva(0x047371A0));
            }
            return cache;
        }
        inline app::SwitchExpression__Class* get_class() {
            return il2cpp::get_class<app::SwitchExpression__Class>(type_info(), "System.Linq.Expressions", "SwitchExpression");
        }
        inline app::SwitchExpression* create() {
            return il2cpp::create_object<app::SwitchExpression>(get_class());
        }
    } // namespace SwitchExpression
} // namespace app::classes::types
