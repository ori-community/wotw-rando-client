#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DllNotFoundException {
        inline app::DllNotFoundException__Class** type_info = (app::DllNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x04758DC8));
        inline app::DllNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::DllNotFoundException__Class>(type_info, "System", "DllNotFoundException");
        }
        inline app::DllNotFoundException* create() {
            return il2cpp::create_object<app::DllNotFoundException>(get_class());
        }
    } // namespace DllNotFoundException
} // namespace app::classes::types
