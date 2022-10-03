#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileWebRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FileWebRequest__Class** type_info;
        inline app::FileWebRequest__Class* get_class() {
            return il2cpp::get_class<app::FileWebRequest__Class>(type_info, "System.Net", "FileWebRequest");
        }
        inline app::FileWebRequest* create() {
            return il2cpp::create_object<app::FileWebRequest>(get_class());
        }
    } // namespace FileWebRequest
} // namespace app::classes::types
