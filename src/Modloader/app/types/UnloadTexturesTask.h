#pragma once
#include <Modloader/app/structs/UnloadTexturesTask.h>
#include <Modloader/app/structs/UnloadTexturesTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnloadTexturesTask {
        inline app::UnloadTexturesTask__Class** type_info() {
            static app::UnloadTexturesTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnloadTexturesTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnloadTexturesTask__Class* get_class() {
            return il2cpp::get_class<app::UnloadTexturesTask__Class>(type_info(), "Moon.ArtOptimization", "UnloadTexturesTask");
        }
        inline app::UnloadTexturesTask* create() {
            return il2cpp::create_object<app::UnloadTexturesTask>(get_class());
        }
    } // namespace UnloadTexturesTask
} // namespace app::classes::types
