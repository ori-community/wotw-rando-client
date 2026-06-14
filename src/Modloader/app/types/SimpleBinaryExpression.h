#pragma once
#include <Modloader/app/structs/SimpleBinaryExpression.h>
#include <Modloader/app/structs/SimpleBinaryExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleBinaryExpression {
        inline app::SimpleBinaryExpression__Class** type_info() {
            static app::SimpleBinaryExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SimpleBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x04773D80));
            }
            return cache;
        }
        inline app::SimpleBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::SimpleBinaryExpression__Class>(type_info(), "System.Linq.Expressions", "SimpleBinaryExpression");
        }
        inline app::SimpleBinaryExpression* create() {
            return il2cpp::create_object<app::SimpleBinaryExpression>(get_class());
        }
    } // namespace SimpleBinaryExpression
} // namespace app::classes::types
