#pragma once
#include <Modloader/app/structs/MinerSpawnTask.h>
#include <Modloader/app/structs/MinerSpawnTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerSpawnTask {
        inline app::MinerSpawnTask__Class** type_info() {
            static app::MinerSpawnTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerSpawnTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::MinerSpawnTask__Class>(type_info(), "", "MinerSpawnTask");
        }
        inline app::MinerSpawnTask* create() {
            return il2cpp::create_object<app::MinerSpawnTask>(get_class());
        }
    } // namespace MinerSpawnTask
} // namespace app::classes::types
