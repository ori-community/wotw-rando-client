#pragma once
#include <Modloader/app/structs/DebugInfoExpression.h>
#include <Modloader/app/structs/DebugInfoExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugInfoExpression {
        inline app::DebugInfoExpression__Class** type_info() {
            static app::DebugInfoExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugInfoExpression__Class**)(modloader::win::memory::resolve_rva(0x04793058));
            }
            return cache;
        }
        inline app::DebugInfoExpression__Class* get_class() {
            return il2cpp::get_class<app::DebugInfoExpression__Class>(type_info(), "System.Linq.Expressions", "DebugInfoExpression");
        }
        inline app::DebugInfoExpression* create() {
            return il2cpp::create_object<app::DebugInfoExpression>(get_class());
        }
    } // namespace DebugInfoExpression
} // namespace app::classes::types
