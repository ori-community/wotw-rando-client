#pragma once
#include <Modloader/app/structs/MantisSpawnTask.h>
#include <Modloader/app/structs/MantisSpawnTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MantisSpawnTask {
        inline app::MantisSpawnTask__Class** type_info() {
            static app::MantisSpawnTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MantisSpawnTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MantisSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::MantisSpawnTask__Class>(type_info(), "", "MantisSpawnTask");
        }
        inline app::MantisSpawnTask* create() {
            return il2cpp::create_object<app::MantisSpawnTask>(get_class());
        }
    } // namespace MantisSpawnTask
} // namespace app::classes::types
