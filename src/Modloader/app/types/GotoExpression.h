#pragma once
#include <Modloader/app/structs/GotoExpression.h>
#include <Modloader/app/structs/GotoExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GotoExpression {
        inline app::GotoExpression__Class** type_info() {
            static app::GotoExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GotoExpression__Class**)(modloader::win::memory::resolve_rva(0x047623B0));
            }
            return cache;
        }
        inline app::GotoExpression__Class* get_class() {
            return il2cpp::get_class<app::GotoExpression__Class>(type_info(), "System.Linq.Expressions", "GotoExpression");
        }
        inline app::GotoExpression* create() {
            return il2cpp::create_object<app::GotoExpression>(get_class());
        }
    } // namespace GotoExpression
} // namespace app::classes::types
