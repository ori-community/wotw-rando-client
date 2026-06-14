#pragma once
#include <Modloader/app/structs/TextureBasedOnHealth.h>
#include <Modloader/app/structs/TextureBasedOnHealth__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureBasedOnHealth {
        inline app::TextureBasedOnHealth__Class** type_info() {
            static app::TextureBasedOnHealth__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureBasedOnHealth__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureBasedOnHealth__Class* get_class() {
            return il2cpp::get_class<app::TextureBasedOnHealth__Class>(type_info(), "", "TextureBasedOnHealth");
        }
        inline app::TextureBasedOnHealth* create() {
            return il2cpp::create_object<app::TextureBasedOnHealth>(get_class());
        }
    } // namespace TextureBasedOnHealth
} // namespace app::classes::types
