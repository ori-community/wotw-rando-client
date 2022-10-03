#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AtlasSpriteTextureBinder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AtlasSpriteTextureBinder__Class** type_info;
        inline app::AtlasSpriteTextureBinder__Class* get_class() {
            return il2cpp::get_class<app::AtlasSpriteTextureBinder__Class>(type_info, "", "AtlasSpriteTextureBinder");
        }
        inline app::AtlasSpriteTextureBinder* create() {
            return il2cpp::create_object<app::AtlasSpriteTextureBinder>(get_class());
        }
    } // namespace AtlasSpriteTextureBinder
} // namespace app::classes::types
