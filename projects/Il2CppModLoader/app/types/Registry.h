#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Registry {
        inline app::Registry__Class** type_info = (app::Registry__Class**)(modloader::win::memory::resolve_rva(0x04791318));
        inline app::Registry__Class* get_class() {
            return il2cpp::get_class<app::Registry__Class>(type_info, "Microsoft.Win32", "Registry");
        }
        inline app::Registry* create() {
            return il2cpp::create_object<app::Registry>(get_class());
        }
    } // namespace Registry
} // namespace app::classes::types
