#pragma once
#include <Modloader/app/structs/AssemblyTitleAttribute.h>
#include <Modloader/app/structs/AssemblyTitleAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyTitleAttribute {
        inline app::AssemblyTitleAttribute__Class** type_info() {
            static app::AssemblyTitleAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyTitleAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyTitleAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyTitleAttribute__Class>(type_info(), "System.Reflection", "AssemblyTitleAttribute");
        }
        inline app::AssemblyTitleAttribute* create() {
            return il2cpp::create_object<app::AssemblyTitleAttribute>(get_class());
        }
    } // namespace AssemblyTitleAttribute
} // namespace app::classes::types
