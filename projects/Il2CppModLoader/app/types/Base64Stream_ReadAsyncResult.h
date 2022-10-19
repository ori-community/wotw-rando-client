#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Base64Stream_ReadAsyncResult {
        inline app::Base64Stream_ReadAsyncResult__Class** type_info = (app::Base64Stream_ReadAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04719540));
        inline app::Base64Stream_ReadAsyncResult__Class* get_class() {
            return il2cpp::get_nested_class<app::Base64Stream_ReadAsyncResult__Class>(type_info, "System.Net", "Base64Stream", "ReadAsyncResult");
        }
        inline app::Base64Stream_ReadAsyncResult* create() {
            return il2cpp::create_object<app::Base64Stream_ReadAsyncResult>(get_class());
        }
    } // namespace Base64Stream_ReadAsyncResult
} // namespace app::classes::types
