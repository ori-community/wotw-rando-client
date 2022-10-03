#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileStream_ReadDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FileStream_ReadDelegate__Class** type_info;
        inline app::FileStream_ReadDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::FileStream_ReadDelegate__Class>(type_info, "System.IO", "FileStream", "ReadDelegate");
        }
        inline app::FileStream_ReadDelegate* create() {
            return il2cpp::create_object<app::FileStream_ReadDelegate>(get_class());
        }
    } // namespace FileStream_ReadDelegate
} // namespace app::classes::types
