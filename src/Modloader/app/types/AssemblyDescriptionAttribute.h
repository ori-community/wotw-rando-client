#pragma once
#include <Modloader/app/structs/AssemblyDescriptionAttribute.h>
#include <Modloader/app/structs/AssemblyDescriptionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyDescriptionAttribute {
        inline app::AssemblyDescriptionAttribute__Class** type_info() {
            static app::AssemblyDescriptionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyDescriptionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyDescriptionAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyDescriptionAttribute__Class>(type_info(), "System.Reflection", "AssemblyDescriptionAttribute");
        }
        inline app::AssemblyDescriptionAttribute* create() {
            return il2cpp::create_object<app::AssemblyDescriptionAttribute>(get_class());
        }
    } // namespace AssemblyDescriptionAttribute
} // namespace app::classes::types
