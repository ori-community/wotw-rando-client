#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeflateManager_CompressFunc {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeflateManager_CompressFunc__Class** type_info;
        inline app::DeflateManager_CompressFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflateManager_CompressFunc__Class>(type_info, "Ionic.Zlib", "DeflateManager", "CompressFunc");
        }
        inline app::DeflateManager_CompressFunc* create() {
            return il2cpp::create_object<app::DeflateManager_CompressFunc>(get_class());
        }
    } // namespace DeflateManager_CompressFunc
} // namespace app::classes::types
