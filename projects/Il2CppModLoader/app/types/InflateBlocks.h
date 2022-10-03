#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InflateBlocks {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InflateBlocks__Class** type_info;
        inline app::InflateBlocks__Class* get_class() {
            return il2cpp::get_class<app::InflateBlocks__Class>(type_info, "Ionic.Zlib", "InflateBlocks");
        }
        inline app::InflateBlocks* create() {
            return il2cpp::create_object<app::InflateBlocks>(get_class());
        }
    } // namespace InflateBlocks
} // namespace app::classes::types
