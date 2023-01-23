#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkipCutscene_OptionalSkipCutsceneSettings__Class.h>
#include <Modloader/app/structs/SkipCutscene_OptionalSkipCutsceneSettings.h>

namespace app::classes::types {
    namespace SkipCutscene_OptionalSkipCutsceneSettings {
        namespace {
            inline app::SkipCutscene_OptionalSkipCutsceneSettings__Class* type_info_ref = nullptr;
        }
        inline app::SkipCutscene_OptionalSkipCutsceneSettings__Class** type_info = &type_info_ref;
        inline app::SkipCutscene_OptionalSkipCutsceneSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SkipCutscene_OptionalSkipCutsceneSettings__Class>(type_info, "", "SkipCutscene", "OptionalSkipCutsceneSettings");
        }
        inline app::SkipCutscene_OptionalSkipCutsceneSettings* create() {
            return il2cpp::create_object<app::SkipCutscene_OptionalSkipCutsceneSettings>(get_class());
        }
    } // namespace SkipCutscene_OptionalSkipCutsceneSettings
} // namespace app::classes::types
