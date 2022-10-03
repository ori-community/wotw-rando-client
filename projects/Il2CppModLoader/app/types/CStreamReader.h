#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CStreamReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CStreamReader__Class** type_info;
        inline app::CStreamReader__Class* get_class() {
            return il2cpp::get_class<app::CStreamReader__Class>(type_info, "System.IO", "CStreamReader");
        }
        inline app::CStreamReader* create() {
            return il2cpp::create_object<app::CStreamReader>(get_class());
        }
    } // namespace CStreamReader
} // namespace app::classes::types
