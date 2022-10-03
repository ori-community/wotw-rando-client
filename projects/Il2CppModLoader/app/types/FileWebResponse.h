#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FileWebResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FileWebResponse__Class** type_info;
        inline app::FileWebResponse__Class* get_class() {
            return il2cpp::get_class<app::FileWebResponse__Class>(type_info, "System.Net", "FileWebResponse");
        }
        inline app::FileWebResponse* create() {
            return il2cpp::create_object<app::FileWebResponse>(get_class());
        }
    } // namespace FileWebResponse
} // namespace app::classes::types
