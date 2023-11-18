#pragma once
#include <Modloader/app/structs/LizardSpawnTask.h>
#include <Modloader/app/structs/LizardSpawnTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardSpawnTask {
        inline app::LizardSpawnTask__Class** type_info() {
            static app::LizardSpawnTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardSpawnTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::LizardSpawnTask__Class>(type_info(), "", "LizardSpawnTask");
        }
        inline app::LizardSpawnTask* create() {
            return il2cpp::create_object<app::LizardSpawnTask>(get_class());
        }
    } // namespace LizardSpawnTask
} // namespace app::classes::types
