#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FileInfo__Class** type_info;
        inline app::FileInfo__Class* get_class() {
            return il2cpp::get_class<app::FileInfo__Class>(type_info, "System.IO", "FileInfo");
        }
        inline app::FileInfo* create() {
            return il2cpp::create_object<app::FileInfo>(get_class());
        }
        inline app::FileInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::FileInfo__Array>(get_class(), size);
        }
    } // namespace FileInfo
} // namespace app::classes::types
