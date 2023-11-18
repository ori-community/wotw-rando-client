#pragma once
#include <Modloader/app/structs/LoopExpression.h>
#include <Modloader/app/structs/LoopExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoopExpression {
        inline app::LoopExpression__Class** type_info() {
            static app::LoopExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoopExpression__Class**)(modloader::win::memory::resolve_rva(0x04744910));
            }
            return cache;
        }
        inline app::LoopExpression__Class* get_class() {
            return il2cpp::get_class<app::LoopExpression__Class>(type_info(), "System.Linq.Expressions", "LoopExpression");
        }
        inline app::LoopExpression* create() {
            return il2cpp::create_object<app::LoopExpression>(get_class());
        }
    } // namespace LoopExpression
} // namespace app::classes::types
