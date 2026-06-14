#pragma once
#include <Modloader/app/structs/TextGenerationSettings.h>
#include <Modloader/app/structs/TextGenerationSettings__Boxed.h>
#include <Modloader/app/structs/TextGenerationSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextGenerationSettings {
        inline app::TextGenerationSettings__Class** type_info() {
            static app::TextGenerationSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextGenerationSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextGenerationSettings__Class* get_class() {
            return il2cpp::get_class<app::TextGenerationSettings__Class>(type_info(), "UnityEngine", "TextGenerationSettings");
        }
        inline app::TextGenerationSettings* create() {
            return il2cpp::create_object<app::TextGenerationSettings>(get_class());
        }
        inline app::TextGenerationSettings__Boxed* box(app::TextGenerationSettings value) {
            return il2cpp::box_value<app::TextGenerationSettings__Boxed>(get_class(), value);
        }
    } // namespace TextGenerationSettings
} // namespace app::classes::types
