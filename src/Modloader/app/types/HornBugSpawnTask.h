#pragma once
#include <Modloader/app/structs/HornBugSpawnTask.h>
#include <Modloader/app/structs/HornBugSpawnTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugSpawnTask {
        inline app::HornBugSpawnTask__Class** type_info() {
            static app::HornBugSpawnTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugSpawnTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::HornBugSpawnTask__Class>(type_info(), "", "HornBugSpawnTask");
        }
        inline app::HornBugSpawnTask* create() {
            return il2cpp::create_object<app::HornBugSpawnTask>(get_class());
        }
    } // namespace HornBugSpawnTask
} // namespace app::classes::types
