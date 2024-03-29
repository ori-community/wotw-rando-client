#pragma once
#include <Modloader/app/structs/AssemblyVersionCompatibility__Enum.h>
#include <Modloader/app/structs/AssemblyVersionCompatibility__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyVersionCompatibility__Enum {
        inline app::AssemblyVersionCompatibility__Enum__Class** type_info() {
            static app::AssemblyVersionCompatibility__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AssemblyVersionCompatibility__Enum__Class**)(modloader::win::memory::resolve_rva(0x04735200));
            }
            return cache;
        }
        inline app::AssemblyVersionCompatibility__Enum__Class* get_class() {
            return il2cpp::get_class<app::AssemblyVersionCompatibility__Enum__Class>(type_info(), "System.Configuration.Assemblies", "AssemblyVersionCompatibility");
        }
        inline app::AssemblyVersionCompatibility__Enum* create() {
            return il2cpp::create_object<app::AssemblyVersionCompatibility__Enum>(get_class());
        }
    } // namespace AssemblyVersionCompatibility__Enum
} // namespace app::classes::types
