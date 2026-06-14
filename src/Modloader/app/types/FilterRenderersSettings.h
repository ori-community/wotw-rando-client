#pragma once
#include <Modloader/app/structs/FilterRenderersSettings.h>
#include <Modloader/app/structs/FilterRenderersSettings__Boxed.h>
#include <Modloader/app/structs/FilterRenderersSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FilterRenderersSettings {
        inline app::FilterRenderersSettings__Class** type_info() {
            static app::FilterRenderersSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FilterRenderersSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FilterRenderersSettings__Class* get_class() {
            return il2cpp::get_class<app::FilterRenderersSettings__Class>(type_info(), "UnityEngine.Experimental.Rendering", "FilterRenderersSettings");
        }
        inline app::FilterRenderersSettings* create() {
            return il2cpp::create_object<app::FilterRenderersSettings>(get_class());
        }
        inline app::FilterRenderersSettings__Boxed* box(app::FilterRenderersSettings value) {
            return il2cpp::box_value<app::FilterRenderersSettings__Boxed>(get_class(), value);
        }
    } // namespace FilterRenderersSettings
} // namespace app::classes::types
