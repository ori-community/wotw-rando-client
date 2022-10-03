#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextGenerationSettings {
        namespace {
            app::TextGenerationSettings__Class* type_info_ref = nullptr;
        }
        app::TextGenerationSettings__Class** type_info = &type_info_ref;
        inline app::TextGenerationSettings__Class* get_class() {
            return il2cpp::get_class<app::TextGenerationSettings__Class>(type_info, "UnityEngine", "TextGenerationSettings");
        }
        inline app::TextGenerationSettings* create() {
            return il2cpp::create_object<app::TextGenerationSettings>(get_class());
        }
        inline app::TextGenerationSettings__Boxed* box(app::TextGenerationSettings value) {
            return il2cpp::box_value<app::TextGenerationSettings__Boxed>(get_class(), value);
        }
    } // namespace TextGenerationSettings
} // namespace app::classes::types
