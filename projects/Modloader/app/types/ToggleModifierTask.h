#pragma once
#include <Modloader/app/structs/ToggleModifierTask.h>
#include <Modloader/app/structs/ToggleModifierTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ToggleModifierTask {
        inline app::ToggleModifierTask__Class** type_info() {
            static app::ToggleModifierTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ToggleModifierTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ToggleModifierTask__Class* get_class() {
            return il2cpp::get_class<app::ToggleModifierTask__Class>(type_info(), "Moon.ArtOptimization", "ToggleModifierTask");
        }
        inline app::ToggleModifierTask* create() {
            return il2cpp::create_object<app::ToggleModifierTask>(get_class());
        }
    } // namespace ToggleModifierTask
} // namespace app::classes::types
