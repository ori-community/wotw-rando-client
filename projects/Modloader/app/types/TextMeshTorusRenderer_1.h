#pragma once
#include <Modloader/app/structs/TextMeshTorusRenderer_1.h>
#include <Modloader/app/structs/TextMeshTorusRenderer_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextMeshTorusRenderer_1 {
        inline app::TextMeshTorusRenderer_1__Class** type_info() {
            static app::TextMeshTorusRenderer_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextMeshTorusRenderer_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextMeshTorusRenderer_1__Class* get_class() {
            return il2cpp::get_class<app::TextMeshTorusRenderer_1__Class>(type_info(), "Moon.UI", "TextMeshTorusRenderer");
        }
        inline app::TextMeshTorusRenderer_1* create() {
            return il2cpp::create_object<app::TextMeshTorusRenderer_1>(get_class());
        }
    } // namespace TextMeshTorusRenderer_1
} // namespace app::classes::types
