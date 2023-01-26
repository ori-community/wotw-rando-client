#pragma once
#include <Modloader/app/structs/Expression_CatchBlockProxy.h>
#include <Modloader/app/structs/Expression_CatchBlockProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_CatchBlockProxy {
        inline app::Expression_CatchBlockProxy__Class** type_info() {
            static app::Expression_CatchBlockProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_CatchBlockProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_CatchBlockProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_CatchBlockProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "CatchBlockProxy");
        }
        inline app::Expression_CatchBlockProxy* create() {
            return il2cpp::create_object<app::Expression_CatchBlockProxy>(get_class());
        }
    } // namespace Expression_CatchBlockProxy
} // namespace app::classes::types
