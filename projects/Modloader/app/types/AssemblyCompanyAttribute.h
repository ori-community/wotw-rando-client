#pragma once
#include <Modloader/app/structs/AssemblyCompanyAttribute.h>
#include <Modloader/app/structs/AssemblyCompanyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyCompanyAttribute {
        inline app::AssemblyCompanyAttribute__Class** type_info() {
            static app::AssemblyCompanyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyCompanyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyCompanyAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyCompanyAttribute__Class>(type_info(), "System.Reflection", "AssemblyCompanyAttribute");
        }
        inline app::AssemblyCompanyAttribute* create() {
            return il2cpp::create_object<app::AssemblyCompanyAttribute>(get_class());
        }
    } // namespace AssemblyCompanyAttribute
} // namespace app::classes::types
