#pragma once
#include <Modloader/app/structs/AssemblyFileVersionAttribute.h>
#include <Modloader/app/structs/AssemblyFileVersionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyFileVersionAttribute {
        inline app::AssemblyFileVersionAttribute__Class** type_info() {
            static app::AssemblyFileVersionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyFileVersionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyFileVersionAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyFileVersionAttribute__Class>(type_info(), "System.Reflection", "AssemblyFileVersionAttribute");
        }
        inline app::AssemblyFileVersionAttribute* create() {
            return il2cpp::create_object<app::AssemblyFileVersionAttribute>(get_class());
        }
    } // namespace AssemblyFileVersionAttribute
} // namespace app::classes::types
