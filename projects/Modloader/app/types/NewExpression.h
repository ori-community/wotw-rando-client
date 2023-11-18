#pragma once
#include <Modloader/app/structs/NewExpression.h>
#include <Modloader/app/structs/NewExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewExpression {
        inline app::NewExpression__Class** type_info() {
            static app::NewExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NewExpression__Class**)(modloader::win::memory::resolve_rva(0x04764850));
            }
            return cache;
        }
        inline app::NewExpression__Class* get_class() {
            return il2cpp::get_class<app::NewExpression__Class>(type_info(), "System.Linq.Expressions", "NewExpression");
        }
        inline app::NewExpression* create() {
            return il2cpp::create_object<app::NewExpression>(get_class());
        }
    } // namespace NewExpression
} // namespace app::classes::types
