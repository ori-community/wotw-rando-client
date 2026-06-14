#pragma once
#include <Modloader/app/structs/TogglePlaymodeTask.h>
#include <Modloader/app/structs/TogglePlaymodeTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TogglePlaymodeTask {
        inline app::TogglePlaymodeTask__Class** type_info() {
            static app::TogglePlaymodeTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TogglePlaymodeTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TogglePlaymodeTask__Class* get_class() {
            return il2cpp::get_class<app::TogglePlaymodeTask__Class>(type_info(), "Moon.ArtOptimization", "TogglePlaymodeTask");
        }
        inline app::TogglePlaymodeTask* create() {
            return il2cpp::create_object<app::TogglePlaymodeTask>(get_class());
        }
    } // namespace TogglePlaymodeTask
} // namespace app::classes::types
