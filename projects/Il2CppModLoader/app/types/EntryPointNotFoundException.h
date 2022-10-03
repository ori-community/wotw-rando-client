#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntryPointNotFoundException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntryPointNotFoundException__Class** type_info;
        inline app::EntryPointNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::EntryPointNotFoundException__Class>(type_info, "System", "EntryPointNotFoundException");
        }
        inline app::EntryPointNotFoundException* create() {
            return il2cpp::create_object<app::EntryPointNotFoundException>(get_class());
        }
    } // namespace EntryPointNotFoundException
} // namespace app::classes::types
