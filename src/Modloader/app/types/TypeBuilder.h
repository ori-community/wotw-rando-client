#pragma once
#include <Modloader/app/structs/TypeBuilder.h>
#include <Modloader/app/structs/TypeBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeBuilder {
        inline app::TypeBuilder__Class** type_info() {
            static app::TypeBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeBuilder__Class* get_class() {
            return il2cpp::get_class<app::TypeBuilder__Class>(type_info(), "System.Reflection.Emit", "TypeBuilder");
        }
        inline app::TypeBuilder* create() {
            return il2cpp::create_object<app::TypeBuilder>(get_class());
        }
    } // namespace TypeBuilder
} // namespace app::classes::types
