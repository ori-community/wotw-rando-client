#pragma once
#include <Modloader/app/structs/AssemblyContentType__Enum.h>
#include <Modloader/app/structs/AssemblyContentType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyContentType__Enum {
        inline app::AssemblyContentType__Enum__Class** type_info() {
            static app::AssemblyContentType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyContentType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyContentType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AssemblyContentType__Enum__Class>(type_info(), "System.Reflection", "AssemblyContentType");
        }
        inline app::AssemblyContentType__Enum* create() {
            return il2cpp::create_object<app::AssemblyContentType__Enum>(get_class());
        }
    } // namespace AssemblyContentType__Enum
} // namespace app::classes::types
