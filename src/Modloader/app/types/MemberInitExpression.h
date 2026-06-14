#pragma once
#include <Modloader/app/structs/MemberInitExpression.h>
#include <Modloader/app/structs/MemberInitExpression__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemberInitExpression {
        inline app::MemberInitExpression__Class** type_info() {
            static app::MemberInitExpression__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemberInitExpression__Class**)(modloader::win::memory::resolve_rva(0x0472B7C0));
            }
            return cache;
        }
        inline app::MemberInitExpression__Class* get_class() {
            return il2cpp::get_class<app::MemberInitExpression__Class>(type_info(), "System.Linq.Expressions", "MemberInitExpression");
        }
        inline app::MemberInitExpression* create() {
            return il2cpp::create_object<app::MemberInitExpression>(get_class());
        }
    } // namespace MemberInitExpression
} // namespace app::classes::types
