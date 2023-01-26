#pragma once
#include <Modloader/app/structs/AssemblyInformationalVersionAttribute.h>
#include <Modloader/app/structs/AssemblyInformationalVersionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyInformationalVersionAttribute {
        inline app::AssemblyInformationalVersionAttribute__Class** type_info() {
            static app::AssemblyInformationalVersionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyInformationalVersionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyInformationalVersionAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyInformationalVersionAttribute__Class>(type_info(), "System.Reflection", "AssemblyInformationalVersionAttribute");
        }
        inline app::AssemblyInformationalVersionAttribute* create() {
            return il2cpp::create_object<app::AssemblyInformationalVersionAttribute>(get_class());
        }
    } // namespace AssemblyInformationalVersionAttribute
} // namespace app::classes::types
