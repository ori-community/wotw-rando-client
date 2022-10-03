#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeflateStream_WriteMethod {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeflateStream_WriteMethod__Class** type_info;
        inline app::DeflateStream_WriteMethod__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflateStream_WriteMethod__Class>(type_info, "System.IO.Compression", "DeflateStream", "WriteMethod");
        }
        inline app::DeflateStream_WriteMethod* create() {
            return il2cpp::create_object<app::DeflateStream_WriteMethod>(get_class());
        }
    } // namespace DeflateStream_WriteMethod
} // namespace app::classes::types
