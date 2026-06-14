#pragma once
#include <Modloader/app/structs/ExprException.h>
#include <Modloader/app/structs/ExprException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExprException {
        inline app::ExprException__Class** type_info() {
            static app::ExprException__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExprException__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExprException__Class* get_class() {
            return il2cpp::get_class<app::ExprException__Class>(type_info(), "System.Data", "ExprException");
        }
        inline app::ExprException* create() {
            return il2cpp::create_object<app::ExprException>(get_class());
        }
    } // namespace ExprException
} // namespace app::classes::types
