#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileBasedStorageHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FileBasedStorageHandler__Class** type_info;
        inline app::FileBasedStorageHandler__Class* get_class() {
            return il2cpp::get_class<app::FileBasedStorageHandler__Class>(type_info, "frameworks.xboxLive", "FileBasedStorageHandler");
        }
        inline app::FileBasedStorageHandler* create() {
            return il2cpp::create_object<app::FileBasedStorageHandler>(get_class());
        }
    } // namespace FileBasedStorageHandler
} // namespace app::classes::types
