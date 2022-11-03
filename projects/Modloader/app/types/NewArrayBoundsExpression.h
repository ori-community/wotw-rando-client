#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NewArrayBoundsExpression {
        inline app::NewArrayBoundsExpression__Class** type_info = (app::NewArrayBoundsExpression__Class**)(modloader::win::memory::resolve_rva(0x0478FBA8));
        inline app::NewArrayBoundsExpression__Class* get_class() {
            return il2cpp::get_class<app::NewArrayBoundsExpression__Class>(type_info, "System.Linq.Expressions", "NewArrayBoundsExpression");
        }
        inline app::NewArrayBoundsExpression* create() {
            return il2cpp::create_object<app::NewArrayBoundsExpression>(get_class());
        }
    } // namespace NewArrayBoundsExpression
} // namespace app::classes::types
