#pragma once
#include <Modloader/app/structs/TextMeshTorusSettings.h>
#include <Modloader/app/structs/TextMeshTorusSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextMeshTorusSettings {
        inline app::TextMeshTorusSettings__Class** type_info() {
            static app::TextMeshTorusSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextMeshTorusSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextMeshTorusSettings__Class* get_class() {
            return il2cpp::get_class<app::TextMeshTorusSettings__Class>(type_info(), "CatlikeCoding.TextBox", "TextMeshTorusSettings");
        }
        inline app::TextMeshTorusSettings* create() {
            return il2cpp::create_object<app::TextMeshTorusSettings>(get_class());
        }
    } // namespace TextMeshTorusSettings
} // namespace app::classes::types
