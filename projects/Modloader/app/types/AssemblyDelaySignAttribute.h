#pragma once
#include <Modloader/app/structs/AssemblyDelaySignAttribute.h>
#include <Modloader/app/structs/AssemblyDelaySignAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyDelaySignAttribute {
        inline app::AssemblyDelaySignAttribute__Class** type_info() {
            static app::AssemblyDelaySignAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyDelaySignAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyDelaySignAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyDelaySignAttribute__Class>(type_info(), "System.Reflection", "AssemblyDelaySignAttribute");
        }
        inline app::AssemblyDelaySignAttribute* create() {
            return il2cpp::create_object<app::AssemblyDelaySignAttribute>(get_class());
        }
    } // namespace AssemblyDelaySignAttribute
} // namespace app::classes::types
