#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DrawRendererSortSettingsRaw__Class.h>
#include <Modloader/app/structs/DrawRendererSortSettingsRaw.h>
#include <Modloader/app/structs/DrawRendererSortSettingsRaw__Boxed.h>

namespace app::classes::types {
    namespace DrawRendererSortSettingsRaw {
        namespace {
            inline app::DrawRendererSortSettingsRaw__Class* type_info_ref = nullptr;
        }
        inline app::DrawRendererSortSettingsRaw__Class** type_info = &type_info_ref;
        inline app::DrawRendererSortSettingsRaw__Class* get_class() {
            return il2cpp::get_class<app::DrawRendererSortSettingsRaw__Class>(type_info, "Moon.Rendering", "DrawRendererSortSettingsRaw");
        }
        inline app::DrawRendererSortSettingsRaw* create() {
            return il2cpp::create_object<app::DrawRendererSortSettingsRaw>(get_class());
        }
        inline app::DrawRendererSortSettingsRaw__Boxed* box(app::DrawRendererSortSettingsRaw value) {
            return il2cpp::box_value<app::DrawRendererSortSettingsRaw__Boxed>(get_class(), value);
        }
    } // namespace DrawRendererSortSettingsRaw
} // namespace app::classes::types
