#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeflateManager_Config__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeflateManager_Config__Array__Class** type_info;
        inline app::DeflateManager_Config__Array__Class* get_class() {
            return il2cpp::get_class<app::DeflateManager_Config__Array__Class>(type_info, "Ionic.Zlib", "DeflateManager+Config[]");
        }
        inline app::DeflateManager_Config__Array* create() {
            return il2cpp::create_object<app::DeflateManager_Config__Array>(get_class());
        }
    } // namespace DeflateManager_Config__Array
} // namespace app::classes::types
