#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AtlasSpriteTexture {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AtlasSpriteTexture__Class** type_info;
        inline app::AtlasSpriteTexture__Class* get_class() {
            return il2cpp::get_class<app::AtlasSpriteTexture__Class>(type_info, "", "AtlasSpriteTexture");
        }
        inline app::AtlasSpriteTexture* create() {
            return il2cpp::create_object<app::AtlasSpriteTexture>(get_class());
        }
        inline app::AtlasSpriteTexture__Array* create_array(int size) {
            return il2cpp::array_new<app::AtlasSpriteTexture__Array>(get_class(), size);
        }
    } // namespace AtlasSpriteTexture
} // namespace app::classes::types
