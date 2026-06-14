#pragma once
#include <Modloader/app/structs/ShowSlicedRenderEditorProfilingSetting.h>
#include <Modloader/app/structs/ShowSlicedRenderEditorProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowSlicedRenderEditorProfilingSetting {
        inline app::ShowSlicedRenderEditorProfilingSetting__Class** type_info() {
            static app::ShowSlicedRenderEditorProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowSlicedRenderEditorProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowSlicedRenderEditorProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ShowSlicedRenderEditorProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "ShowSlicedRenderEditorProfilingSetting");
        }
        inline app::ShowSlicedRenderEditorProfilingSetting* create() {
            return il2cpp::create_object<app::ShowSlicedRenderEditorProfilingSetting>(get_class());
        }
    } // namespace ShowSlicedRenderEditorProfilingSetting
} // namespace app::classes::types
