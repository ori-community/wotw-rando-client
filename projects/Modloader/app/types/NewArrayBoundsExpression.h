#pragma once
#include <Modloader/app/structs/NewArrayBoundsExpression.h>
#include <Modloader/app/structs/NewArrayBoundsExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewArrayBoundsExpression {
        inline app::NewArrayBoundsExpression__Class** type_info() {
            static app::NewArrayBoundsExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NewArrayBoundsExpression__Class**)(modloader::win::memory::resolve_rva(0x0478FBA8));
            }
            return cache;
        }
        inline app::NewArrayBoundsExpression__Class* get_class() {
            return il2cpp::get_class<app::NewArrayBoundsExpression__Class>(type_info(), "System.Linq.Expressions", "NewArrayBoundsExpression");
        }
        inline app::NewArrayBoundsExpression* create() {
            return il2cpp::create_object<app::NewArrayBoundsExpression>(get_class());
        }
    } // namespace NewArrayBoundsExpression
} // namespace app::classes::types
