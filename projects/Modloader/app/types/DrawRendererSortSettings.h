#pragma once
#include <Modloader/app/structs/DrawRendererSortSettings.h>
#include <Modloader/app/structs/DrawRendererSortSettings__Boxed.h>
#include <Modloader/app/structs/DrawRendererSortSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrawRendererSortSettings {
        inline app::DrawRendererSortSettings__Class** type_info() {
            static app::DrawRendererSortSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DrawRendererSortSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DrawRendererSortSettings__Class* get_class() {
            return il2cpp::get_class<app::DrawRendererSortSettings__Class>(type_info(), "UnityEngine.Experimental.Rendering", "DrawRendererSortSettings");
        }
        inline app::DrawRendererSortSettings* create() {
            return il2cpp::create_object<app::DrawRendererSortSettings>(get_class());
        }
        inline app::DrawRendererSortSettings__Boxed* box(app::DrawRendererSortSettings value) {
            return il2cpp::box_value<app::DrawRendererSortSettings__Boxed>(get_class(), value);
        }
    } // namespace DrawRendererSortSettings
} // namespace app::classes::types
