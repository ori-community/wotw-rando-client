#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureBasedOnHealth {
        namespace {
            app::TextureBasedOnHealth__Class* type_info_ref = nullptr;
        }
        app::TextureBasedOnHealth__Class** type_info = &type_info_ref;
        inline app::TextureBasedOnHealth__Class* get_class() {
            return il2cpp::get_class<app::TextureBasedOnHealth__Class>(type_info, "", "TextureBasedOnHealth");
        }
        inline app::TextureBasedOnHealth* create() {
            return il2cpp::create_object<app::TextureBasedOnHealth>(get_class());
        }
    } // namespace TextureBasedOnHealth
} // namespace app::classes::types
