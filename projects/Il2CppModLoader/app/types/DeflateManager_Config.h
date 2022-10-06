#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeflateManager_Config {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeflateManager_Config__Class** type_info;
        inline app::DeflateManager_Config__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflateManager_Config__Class>(type_info, "Ionic.Zlib", "DeflateManager", "Config");
        }
        inline app::DeflateManager_Config* create() {
            return il2cpp::create_object<app::DeflateManager_Config>(get_class());
        }
        inline app::DeflateManager_Config__Array* create_array(int size) {
            return il2cpp::array_new<app::DeflateManager_Config__Array>(get_class(), size);
        }
        inline app::DeflateManager_Config__Array* create_array(const std::vector<app::DeflateManager_Config*>& items) {
            return il2cpp::array_new<app::DeflateManager_Config__Array>(get_class(), items);
        }
    } // namespace DeflateManager_Config
} // namespace app::classes::types
