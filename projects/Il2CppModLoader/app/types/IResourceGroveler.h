#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IResourceGroveler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IResourceGroveler__Class** type_info;
        inline app::IResourceGroveler__Class* get_class() {
            return il2cpp::get_class<app::IResourceGroveler__Class>(type_info, "System.Resources", "IResourceGroveler");
        }
    } // namespace IResourceGroveler
} // namespace app::classes::types
