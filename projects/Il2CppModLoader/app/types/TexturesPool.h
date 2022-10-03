#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TexturesPool {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TexturesPool__Class** type_info;
        inline app::TexturesPool__Class* get_class() {
            return il2cpp::get_class<app::TexturesPool__Class>(type_info, "Moon.ArtOptimization", "TexturesPool");
        }
        inline app::TexturesPool* create() {
            return il2cpp::create_object<app::TexturesPool>(get_class());
        }
    } // namespace TexturesPool
} // namespace app::classes::types
