#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoopExpression {
        inline app::LoopExpression__Class** type_info = (app::LoopExpression__Class**)(modloader::win::memory::resolve_rva(0x04744910));
        inline app::LoopExpression__Class* get_class() {
            return il2cpp::get_class<app::LoopExpression__Class>(type_info, "System.Linq.Expressions", "LoopExpression");
        }
        inline app::LoopExpression* create() {
            return il2cpp::create_object<app::LoopExpression>(get_class());
        }
    } // namespace LoopExpression
} // namespace app::classes::types
