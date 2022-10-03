#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TexturePoolEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TexturePoolEntity__Class** type_info;
        inline app::TexturePoolEntity__Class* get_class() {
            return il2cpp::get_class<app::TexturePoolEntity__Class>(type_info, "Moon.ArtOptimization", "TexturePoolEntity");
        }
        inline app::TexturePoolEntity* create() {
            return il2cpp::create_object<app::TexturePoolEntity>(get_class());
        }
        inline app::TexturePoolEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::TexturePoolEntity__Array>(get_class(), size);
        }
    } // namespace TexturePoolEntity
} // namespace app::classes::types
