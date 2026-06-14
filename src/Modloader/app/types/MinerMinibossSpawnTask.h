#pragma once
#include <Modloader/app/structs/MinerMinibossSpawnTask.h>
#include <Modloader/app/structs/MinerMinibossSpawnTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerMinibossSpawnTask {
        inline app::MinerMinibossSpawnTask__Class** type_info() {
            static app::MinerMinibossSpawnTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerMinibossSpawnTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerMinibossSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::MinerMinibossSpawnTask__Class>(type_info(), "", "MinerMinibossSpawnTask");
        }
        inline app::MinerMinibossSpawnTask* create() {
            return il2cpp::create_object<app::MinerMinibossSpawnTask>(get_class());
        }
    } // namespace MinerMinibossSpawnTask
} // namespace app::classes::types
