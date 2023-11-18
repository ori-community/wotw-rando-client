#pragma once
#include <Modloader/app/structs/AssemblyBuilder.h>
#include <Modloader/app/structs/AssemblyBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyBuilder {
        inline app::AssemblyBuilder__Class** type_info() {
            static app::AssemblyBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyBuilder__Class* get_class() {
            return il2cpp::get_class<app::AssemblyBuilder__Class>(type_info(), "System.Reflection.Emit", "AssemblyBuilder");
        }
        inline app::AssemblyBuilder* create() {
            return il2cpp::create_object<app::AssemblyBuilder>(get_class());
        }
    } // namespace AssemblyBuilder
} // namespace app::classes::types
