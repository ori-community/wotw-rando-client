#pragma once
#include <Modloader/app/structs/ByRefParameterExpression.h>
#include <Modloader/app/structs/ByRefParameterExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ByRefParameterExpression {
        inline app::ByRefParameterExpression__Class** type_info() {
            static app::ByRefParameterExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ByRefParameterExpression__Class**)(modloader::win::memory::resolve_rva(0x0473F498));
            }
            return cache;
        }
        inline app::ByRefParameterExpression__Class* get_class() {
            return il2cpp::get_class<app::ByRefParameterExpression__Class>(type_info(), "System.Linq.Expressions", "ByRefParameterExpression");
        }
        inline app::ByRefParameterExpression* create() {
            return il2cpp::create_object<app::ByRefParameterExpression>(get_class());
        }
    } // namespace ByRefParameterExpression
} // namespace app::classes::types
