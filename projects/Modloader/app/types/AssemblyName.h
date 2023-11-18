#pragma once
#include <Modloader/app/structs/AssemblyName.h>
#include <Modloader/app/structs/AssemblyName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyName {
        inline app::AssemblyName__Class** type_info() {
            static app::AssemblyName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AssemblyName__Class**)(modloader::win::memory::resolve_rva(0x0477E0B8));
            }
            return cache;
        }
        inline app::AssemblyName__Class* get_class() {
            return il2cpp::get_class<app::AssemblyName__Class>(type_info(), "System.Reflection", "AssemblyName");
        }
        inline app::AssemblyName* create() {
            return il2cpp::create_object<app::AssemblyName>(get_class());
        }
    } // namespace AssemblyName
} // namespace app::classes::types
