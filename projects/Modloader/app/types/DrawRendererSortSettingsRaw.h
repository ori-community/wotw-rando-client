#pragma once
#include <Modloader/app/structs/DrawRendererSortSettingsRaw.h>
#include <Modloader/app/structs/DrawRendererSortSettingsRaw__Boxed.h>
#include <Modloader/app/structs/DrawRendererSortSettingsRaw__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrawRendererSortSettingsRaw {
        inline app::DrawRendererSortSettingsRaw__Class** type_info() {
            static app::DrawRendererSortSettingsRaw__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DrawRendererSortSettingsRaw__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DrawRendererSortSettingsRaw__Class* get_class() {
            return il2cpp::get_class<app::DrawRendererSortSettingsRaw__Class>(type_info(), "Moon.Rendering", "DrawRendererSortSettingsRaw");
        }
        inline app::DrawRendererSortSettingsRaw* create() {
            return il2cpp::create_object<app::DrawRendererSortSettingsRaw>(get_class());
        }
        inline app::DrawRendererSortSettingsRaw__Boxed* box(app::DrawRendererSortSettingsRaw value) {
            return il2cpp::box_value<app::DrawRendererSortSettingsRaw__Boxed>(get_class(), value);
        }
    } // namespace DrawRendererSortSettingsRaw
} // namespace app::classes::types
