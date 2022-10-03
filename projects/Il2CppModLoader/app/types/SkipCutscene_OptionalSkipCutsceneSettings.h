#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkipCutscene_OptionalSkipCutsceneSettings {
        namespace {
            app::SkipCutscene_OptionalSkipCutsceneSettings__Class* type_info_ref = nullptr;
        }
        app::SkipCutscene_OptionalSkipCutsceneSettings__Class** type_info = &type_info_ref;
        inline app::SkipCutscene_OptionalSkipCutsceneSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SkipCutscene_OptionalSkipCutsceneSettings__Class>(type_info, "", "SkipCutscene", "OptionalSkipCutsceneSettings");
        }
        inline app::SkipCutscene_OptionalSkipCutsceneSettings* create() {
            return il2cpp::create_object<app::SkipCutscene_OptionalSkipCutsceneSettings>(get_class());
        }
    } // namespace SkipCutscene_OptionalSkipCutsceneSettings
} // namespace app::classes::types
