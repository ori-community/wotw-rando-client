#pragma once
#include <Modloader/app/structs/PropertyBuilder.h>
#include <Modloader/app/structs/PropertyBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyBuilder {
        inline app::PropertyBuilder__Class** type_info() {
            static app::PropertyBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PropertyBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PropertyBuilder__Class* get_class() {
            return il2cpp::get_class<app::PropertyBuilder__Class>(type_info(), "System.Reflection.Emit", "PropertyBuilder");
        }
        inline app::PropertyBuilder* create() {
            return il2cpp::create_object<app::PropertyBuilder>(get_class());
        }
    } // namespace PropertyBuilder
} // namespace app::classes::types
