#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DirectoryInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DirectoryInfo__Class** type_info;
        inline app::DirectoryInfo__Class* get_class() {
            return il2cpp::get_class<app::DirectoryInfo__Class>(type_info, "System.IO", "DirectoryInfo");
        }
        inline app::DirectoryInfo* create() {
            return il2cpp::create_object<app::DirectoryInfo>(get_class());
        }
        inline app::DirectoryInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::DirectoryInfo__Array>(get_class(), size);
        }
    } // namespace DirectoryInfo
} // namespace app::classes::types
