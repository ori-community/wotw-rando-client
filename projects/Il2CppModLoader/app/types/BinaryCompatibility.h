#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryCompatibility {
        inline app::BinaryCompatibility__Class** type_info = (app::BinaryCompatibility__Class**)(modloader::win::memory::resolve_rva(0x0476A5E0));
        inline app::BinaryCompatibility__Class* get_class() {
            return il2cpp::get_class<app::BinaryCompatibility__Class>(type_info, "System.Runtime.Versioning", "BinaryCompatibility");
        }
        inline app::BinaryCompatibility* create() {
            return il2cpp::create_object<app::BinaryCompatibility>(get_class());
        }
    } // namespace BinaryCompatibility
} // namespace app::classes::types
