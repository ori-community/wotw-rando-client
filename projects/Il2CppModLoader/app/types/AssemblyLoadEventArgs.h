#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssemblyLoadEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AssemblyLoadEventArgs__Class** type_info;
        inline app::AssemblyLoadEventArgs__Class* get_class() {
            return il2cpp::get_class<app::AssemblyLoadEventArgs__Class>(type_info, "System", "AssemblyLoadEventArgs");
        }
        inline app::AssemblyLoadEventArgs* create() {
            return il2cpp::create_object<app::AssemblyLoadEventArgs>(get_class());
        }
    } // namespace AssemblyLoadEventArgs
} // namespace app::classes::types
