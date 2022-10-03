#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Base64Stream_WriteAsyncResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Base64Stream_WriteAsyncResult__Class** type_info;
        inline app::Base64Stream_WriteAsyncResult__Class* get_class() {
            return il2cpp::get_nested_class<app::Base64Stream_WriteAsyncResult__Class>(type_info, "System.Net", "Base64Stream", "WriteAsyncResult");
        }
        inline app::Base64Stream_WriteAsyncResult* create() {
            return il2cpp::create_object<app::Base64Stream_WriteAsyncResult>(get_class());
        }
    } // namespace Base64Stream_WriteAsyncResult
} // namespace app::classes::types
