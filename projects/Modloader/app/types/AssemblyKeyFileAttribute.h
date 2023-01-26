#pragma once
#include <Modloader/app/structs/AssemblyKeyFileAttribute.h>
#include <Modloader/app/structs/AssemblyKeyFileAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyKeyFileAttribute {
        inline app::AssemblyKeyFileAttribute__Class** type_info() {
            static app::AssemblyKeyFileAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyKeyFileAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyKeyFileAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyKeyFileAttribute__Class>(type_info(), "System.Reflection", "AssemblyKeyFileAttribute");
        }
        inline app::AssemblyKeyFileAttribute* create() {
            return il2cpp::create_object<app::AssemblyKeyFileAttribute>(get_class());
        }
    } // namespace AssemblyKeyFileAttribute
} // namespace app::classes::types
