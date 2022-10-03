#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResourceReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ResourceReader__Class** type_info;
        inline app::ResourceReader__Class* get_class() {
            return il2cpp::get_class<app::ResourceReader__Class>(type_info, "System.Resources", "ResourceReader");
        }
        inline app::ResourceReader* create() {
            return il2cpp::create_object<app::ResourceReader>(get_class());
        }
    } // namespace ResourceReader
} // namespace app::classes::types
