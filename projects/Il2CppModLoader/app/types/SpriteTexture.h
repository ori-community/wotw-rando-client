#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpriteTexture {
        namespace {
            inline app::SpriteTexture__Class* type_info_ref = nullptr;
        }
        inline app::SpriteTexture__Class** type_info = &type_info_ref;
        inline app::SpriteTexture__Class* get_class() {
            return il2cpp::get_class<app::SpriteTexture__Class>(type_info, "", "SpriteTexture");
        }
        inline app::SpriteTexture* create() {
            return il2cpp::create_object<app::SpriteTexture>(get_class());
        }
    } // namespace SpriteTexture
} // namespace app::classes::types
