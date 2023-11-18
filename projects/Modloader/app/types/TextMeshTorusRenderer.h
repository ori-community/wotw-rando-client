#pragma once
#include <Modloader/app/structs/TextMeshTorusRenderer.h>
#include <Modloader/app/structs/TextMeshTorusRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextMeshTorusRenderer {
        inline app::TextMeshTorusRenderer__Class** type_info() {
            static app::TextMeshTorusRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextMeshTorusRenderer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextMeshTorusRenderer__Class* get_class() {
            return il2cpp::get_class<app::TextMeshTorusRenderer__Class>(type_info(), "CatlikeCoding.TextBox", "TextMeshTorusRenderer");
        }
        inline app::TextMeshTorusRenderer* create() {
            return il2cpp::create_object<app::TextMeshTorusRenderer>(get_class());
        }
    } // namespace TextMeshTorusRenderer
} // namespace app::classes::types
