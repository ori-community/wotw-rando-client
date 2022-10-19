#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebClient_UploadBitsState {
        inline app::WebClient_UploadBitsState__Class** type_info = (app::WebClient_UploadBitsState__Class**)(modloader::win::memory::resolve_rva(0x0478ED00));
        inline app::WebClient_UploadBitsState__Class* get_class() {
            return il2cpp::get_nested_class<app::WebClient_UploadBitsState__Class>(type_info, "System.Net", "WebClient", "UploadBitsState");
        }
        inline app::WebClient_UploadBitsState* create() {
            return il2cpp::create_object<app::WebClient_UploadBitsState>(get_class());
        }
    } // namespace WebClient_UploadBitsState
} // namespace app::classes::types
