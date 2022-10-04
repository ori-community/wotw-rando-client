#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IResourceReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IResourceReader__Class** type_info;
        inline app::IResourceReader__Class* get_class() {
            return il2cpp::get_class<app::IResourceReader__Class>(type_info, "System.Resources", "IResourceReader");
        }
    } // namespace IResourceReader
} // namespace app::classes::types
