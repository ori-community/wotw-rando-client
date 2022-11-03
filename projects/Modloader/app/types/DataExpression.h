#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataExpression {
        inline app::DataExpression__Class** type_info = (app::DataExpression__Class**)(modloader::win::memory::resolve_rva(0x04707590));
        inline app::DataExpression__Class* get_class() {
            return il2cpp::get_class<app::DataExpression__Class>(type_info, "System.Data", "DataExpression");
        }
        inline app::DataExpression* create() {
            return il2cpp::create_object<app::DataExpression>(get_class());
        }
    } // namespace DataExpression
} // namespace app::classes::types
