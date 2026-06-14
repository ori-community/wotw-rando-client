#pragma once
#include <Modloader/app/structs/SkeetoSpawnTask.h>
#include <Modloader/app/structs/SkeetoSpawnTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoSpawnTask {
        inline app::SkeetoSpawnTask__Class** type_info() {
            static app::SkeetoSpawnTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoSpawnTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::SkeetoSpawnTask__Class>(type_info(), "", "SkeetoSpawnTask");
        }
        inline app::SkeetoSpawnTask* create() {
            return il2cpp::create_object<app::SkeetoSpawnTask>(get_class());
        }
    } // namespace SkeetoSpawnTask
} // namespace app::classes::types
