#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MinerMinibossSpawnTask__Class.h>
#include <Modloader/app/structs/MinerMinibossSpawnTask.h>

namespace app::classes::types {
    namespace MinerMinibossSpawnTask {
        namespace {
            inline app::MinerMinibossSpawnTask__Class* type_info_ref = nullptr;
        }
        inline app::MinerMinibossSpawnTask__Class** type_info = &type_info_ref;
        inline app::MinerMinibossSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::MinerMinibossSpawnTask__Class>(type_info, "", "MinerMinibossSpawnTask");
        }
        inline app::MinerMinibossSpawnTask* create() {
            return il2cpp::create_object<app::MinerMinibossSpawnTask>(get_class());
        }
    } // namespace MinerMinibossSpawnTask
} // namespace app::classes::types
