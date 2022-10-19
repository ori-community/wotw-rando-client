#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoField {
        inline app::MonoField__Class** type_info = (app::MonoField__Class**)(modloader::win::memory::resolve_rva(0x0475D940));
        inline app::MonoField__Class* get_class() {
            return il2cpp::get_class<app::MonoField__Class>(type_info, "System.Reflection", "MonoField");
        }
        inline app::MonoField* create() {
            return il2cpp::create_object<app::MonoField>(get_class());
        }
    } // namespace MonoField
} // namespace app::classes::types
