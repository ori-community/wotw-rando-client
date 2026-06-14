#pragma once
#include <Modloader/app/structs/DefaultExpression.h>
#include <Modloader/app/structs/DefaultExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultExpression {
        inline app::DefaultExpression__Class** type_info() {
            static app::DefaultExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultExpression__Class**)(modloader::win::memory::resolve_rva(0x04721A58));
            }
            return cache;
        }
        inline app::DefaultExpression__Class* get_class() {
            return il2cpp::get_class<app::DefaultExpression__Class>(type_info(), "System.Linq.Expressions", "DefaultExpression");
        }
        inline app::DefaultExpression* create() {
            return il2cpp::create_object<app::DefaultExpression>(get_class());
        }
    } // namespace DefaultExpression
} // namespace app::classes::types
