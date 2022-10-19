#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultBinder {
        inline app::DefaultBinder__Class** type_info = (app::DefaultBinder__Class**)(modloader::win::memory::resolve_rva(0x04703F50));
        inline app::DefaultBinder__Class* get_class() {
            return il2cpp::get_class<app::DefaultBinder__Class>(type_info, "System", "DefaultBinder");
        }
        inline app::DefaultBinder* create() {
            return il2cpp::create_object<app::DefaultBinder>(get_class());
        }
    } // namespace DefaultBinder
} // namespace app::classes::types
