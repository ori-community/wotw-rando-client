#pragma once
#include <Modloader/app/structs/MemberExpression.h>
#include <Modloader/app/structs/MemberExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemberExpression {
        inline app::MemberExpression__Class** type_info() {
            static app::MemberExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemberExpression__Class**)(modloader::win::memory::resolve_rva(0x047062A0));
            }
            return cache;
        }
        inline app::MemberExpression__Class* get_class() {
            return il2cpp::get_class<app::MemberExpression__Class>(type_info(), "System.Linq.Expressions", "MemberExpression");
        }
        inline app::MemberExpression* create() {
            return il2cpp::create_object<app::MemberExpression>(get_class());
        }
    } // namespace MemberExpression
} // namespace app::classes::types
