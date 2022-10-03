#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileStream_WriteDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FileStream_WriteDelegate__Class** type_info;
        inline app::FileStream_WriteDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::FileStream_WriteDelegate__Class>(type_info, "System.IO", "FileStream", "WriteDelegate");
        }
        inline app::FileStream_WriteDelegate* create() {
            return il2cpp::create_object<app::FileStream_WriteDelegate>(get_class());
        }
    } // namespace FileStream_WriteDelegate
} // namespace app::classes::types
