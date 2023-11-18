#pragma once
#include <Modloader/app/structs/SpiderBatSpawnTask.h>
#include <Modloader/app/structs/SpiderBatSpawnTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatSpawnTask {
        inline app::SpiderBatSpawnTask__Class** type_info() {
            static app::SpiderBatSpawnTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatSpawnTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatSpawnTask__Class>(type_info(), "", "SpiderBatSpawnTask");
        }
        inline app::SpiderBatSpawnTask* create() {
            return il2cpp::create_object<app::SpiderBatSpawnTask>(get_class());
        }
    } // namespace SpiderBatSpawnTask
} // namespace app::classes::types
