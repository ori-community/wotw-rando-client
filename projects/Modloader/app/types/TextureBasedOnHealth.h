#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextureBasedOnHealth {
        namespace {
            inline app::TextureBasedOnHealth__Class* type_info_ref = nullptr;
        }
        inline app::TextureBasedOnHealth__Class** type_info = &type_info_ref;
        inline app::TextureBasedOnHealth__Class* get_class() {
            return il2cpp::get_class<app::TextureBasedOnHealth__Class>(type_info, "", "TextureBasedOnHealth");
        }
        inline app::TextureBasedOnHealth* create() {
            return il2cpp::create_object<app::TextureBasedOnHealth>(get_class());
        }
    } // namespace TextureBasedOnHealth
} // namespace app::classes::types
