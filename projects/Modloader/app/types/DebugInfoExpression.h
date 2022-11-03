#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugInfoExpression {
        inline app::DebugInfoExpression__Class** type_info = (app::DebugInfoExpression__Class**)(modloader::win::memory::resolve_rva(0x04793058));
        inline app::DebugInfoExpression__Class* get_class() {
            return il2cpp::get_class<app::DebugInfoExpression__Class>(type_info, "System.Linq.Expressions", "DebugInfoExpression");
        }
        inline app::DebugInfoExpression* create() {
            return il2cpp::create_object<app::DebugInfoExpression>(get_class());
        }
    } // namespace DebugInfoExpression
} // namespace app::classes::types
