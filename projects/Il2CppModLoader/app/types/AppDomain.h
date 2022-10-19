#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AppDomain {
        inline app::AppDomain__Class** type_info = (app::AppDomain__Class**)(modloader::win::memory::resolve_rva(0x047410D8));
        inline app::AppDomain__Class* get_class() {
            return il2cpp::get_class<app::AppDomain__Class>(type_info, "System", "AppDomain");
        }
        inline app::AppDomain* create() {
            return il2cpp::create_object<app::AppDomain>(get_class());
        }
    } // namespace AppDomain
} // namespace app::classes::types
