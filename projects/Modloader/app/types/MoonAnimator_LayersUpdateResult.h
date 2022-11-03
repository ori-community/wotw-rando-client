#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimator_LayersUpdateResult {
        namespace {
            inline app::MoonAnimator_LayersUpdateResult__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimator_LayersUpdateResult__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_LayersUpdateResult__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimator_LayersUpdateResult__Class>(type_info, "Moon", "MoonAnimator", "LayersUpdateResult");
        }
        inline app::MoonAnimator_LayersUpdateResult* create() {
            return il2cpp::create_object<app::MoonAnimator_LayersUpdateResult>(get_class());
        }
        inline app::MoonAnimator_LayersUpdateResult__Boxed* box(app::MoonAnimator_LayersUpdateResult value) {
            return il2cpp::box_value<app::MoonAnimator_LayersUpdateResult__Boxed>(get_class(), value);
        }
    } // namespace MoonAnimator_LayersUpdateResult
} // namespace app::classes::types
