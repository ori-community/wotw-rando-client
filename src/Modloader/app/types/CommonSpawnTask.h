#pragma once
#include <Modloader/app/structs/CommonSpawnTask.h>
#include <Modloader/app/structs/CommonSpawnTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CommonSpawnTask {
        inline app::CommonSpawnTask__Class** type_info() {
            static app::CommonSpawnTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CommonSpawnTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CommonSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::CommonSpawnTask__Class>(type_info(), "", "CommonSpawnTask");
        }
        inline app::CommonSpawnTask* create() {
            return il2cpp::create_object<app::CommonSpawnTask>(get_class());
        }
    } // namespace CommonSpawnTask
} // namespace app::classes::types
