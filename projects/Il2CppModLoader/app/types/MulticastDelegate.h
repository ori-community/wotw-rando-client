#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MulticastDelegate {
        inline app::MulticastDelegate__Class** type_info = (app::MulticastDelegate__Class**)(modloader::win::memory::resolve_rva(0x04799218));
        inline app::MulticastDelegate__Class* get_class() {
            return il2cpp::get_class<app::MulticastDelegate__Class>(type_info, "System", "MulticastDelegate");
        }
        inline app::MulticastDelegate* create() {
            return il2cpp::create_object<app::MulticastDelegate>(get_class());
        }
    } // namespace MulticastDelegate
} // namespace app::classes::types
