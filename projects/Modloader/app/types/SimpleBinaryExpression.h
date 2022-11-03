#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleBinaryExpression {
        inline app::SimpleBinaryExpression__Class** type_info = (app::SimpleBinaryExpression__Class**)(modloader::win::memory::resolve_rva(0x04773D80));
        inline app::SimpleBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::SimpleBinaryExpression__Class>(type_info, "System.Linq.Expressions", "SimpleBinaryExpression");
        }
        inline app::SimpleBinaryExpression* create() {
            return il2cpp::create_object<app::SimpleBinaryExpression>(get_class());
        }
    } // namespace SimpleBinaryExpression
} // namespace app::classes::types
