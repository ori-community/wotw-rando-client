#pragma once
#include <Modloader/app/structs/FullConditionalExpression.h>
#include <Modloader/app/structs/FullConditionalExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FullConditionalExpression {
        inline app::FullConditionalExpression__Class** type_info() {
            static app::FullConditionalExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FullConditionalExpression__Class**)(modloader::win::memory::resolve_rva(0x0473B7F0));
            }
            return cache;
        }
        inline app::FullConditionalExpression__Class* get_class() {
            return il2cpp::get_class<app::FullConditionalExpression__Class>(type_info(), "System.Linq.Expressions", "FullConditionalExpression");
        }
        inline app::FullConditionalExpression* create() {
            return il2cpp::create_object<app::FullConditionalExpression>(get_class());
        }
    } // namespace FullConditionalExpression
} // namespace app::classes::types
