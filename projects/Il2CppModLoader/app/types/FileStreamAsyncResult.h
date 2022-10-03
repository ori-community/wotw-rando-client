#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileStreamAsyncResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FileStreamAsyncResult__Class** type_info;
        inline app::FileStreamAsyncResult__Class* get_class() {
            return il2cpp::get_class<app::FileStreamAsyncResult__Class>(type_info, "System.IO", "FileStreamAsyncResult");
        }
        inline app::FileStreamAsyncResult* create() {
            return il2cpp::create_object<app::FileStreamAsyncResult>(get_class());
        }
    } // namespace FileStreamAsyncResult
} // namespace app::classes::types
