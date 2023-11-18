#pragma once
#include <Modloader/app/structs/AssemblyProductAttribute.h>
#include <Modloader/app/structs/AssemblyProductAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyProductAttribute {
        inline app::AssemblyProductAttribute__Class** type_info() {
            static app::AssemblyProductAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyProductAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyProductAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyProductAttribute__Class>(type_info(), "System.Reflection", "AssemblyProductAttribute");
        }
        inline app::AssemblyProductAttribute* create() {
            return il2cpp::create_object<app::AssemblyProductAttribute>(get_class());
        }
    } // namespace AssemblyProductAttribute
} // namespace app::classes::types
