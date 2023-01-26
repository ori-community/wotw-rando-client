#pragma once
#include <Modloader/app/structs/BlockExpression.h>
#include <Modloader/app/structs/BlockExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlockExpression {
        inline app::BlockExpression__Class** type_info() {
            static app::BlockExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BlockExpression__Class**)(modloader::win::memory::resolve_rva(0x0473AAB8));
            }
            return cache;
        }
        inline app::BlockExpression__Class* get_class() {
            return il2cpp::get_class<app::BlockExpression__Class>(type_info(), "System.Linq.Expressions", "BlockExpression");
        }
        inline app::BlockExpression* create() {
            return il2cpp::create_object<app::BlockExpression>(get_class());
        }
    } // namespace BlockExpression
} // namespace app::classes::types
