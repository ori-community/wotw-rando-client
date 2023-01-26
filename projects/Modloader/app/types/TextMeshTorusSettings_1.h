#pragma once
#include <Modloader/app/structs/TextMeshTorusSettings_1.h>
#include <Modloader/app/structs/TextMeshTorusSettings_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextMeshTorusSettings_1 {
        inline app::TextMeshTorusSettings_1__Class** type_info() {
            static app::TextMeshTorusSettings_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextMeshTorusSettings_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextMeshTorusSettings_1__Class* get_class() {
            return il2cpp::get_class<app::TextMeshTorusSettings_1__Class>(type_info(), "Moon.UI", "TextMeshTorusSettings");
        }
        inline app::TextMeshTorusSettings_1* create() {
            return il2cpp::create_object<app::TextMeshTorusSettings_1>(get_class());
        }
    } // namespace TextMeshTorusSettings_1
} // namespace app::classes::types
