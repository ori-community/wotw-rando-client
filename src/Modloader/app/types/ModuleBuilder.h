#pragma once
#include <Modloader/app/structs/ModuleBuilder.h>
#include <Modloader/app/structs/ModuleBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModuleBuilder {
        inline app::ModuleBuilder__Class** type_info() {
            static app::ModuleBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ModuleBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ModuleBuilder__Class* get_class() {
            return il2cpp::get_class<app::ModuleBuilder__Class>(type_info(), "System.Reflection.Emit", "ModuleBuilder");
        }
        inline app::ModuleBuilder* create() {
            return il2cpp::create_object<app::ModuleBuilder>(get_class());
        }
    } // namespace ModuleBuilder
} // namespace app::classes::types
