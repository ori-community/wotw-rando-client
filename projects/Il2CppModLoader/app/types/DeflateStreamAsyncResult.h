#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeflateStreamAsyncResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeflateStreamAsyncResult__Class** type_info;
        inline app::DeflateStreamAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::DeflateStreamAsyncResult__Class>(type_info, "Unity.IO.Compression", "DeflateStreamAsyncResult");
        }
        inline app::DeflateStreamAsyncResult* create() {
            return il2cpp::create_object<app::DeflateStreamAsyncResult>(get_class());
        }
    } // namespace DeflateStreamAsyncResult
} // namespace app::classes::types
