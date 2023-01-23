#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LizardSpawnTask__Class.h>
#include <Modloader/app/structs/LizardSpawnTask.h>

namespace app::classes::types {
    namespace LizardSpawnTask {
        namespace {
            inline app::LizardSpawnTask__Class* type_info_ref = nullptr;
        }
        inline app::LizardSpawnTask__Class** type_info = &type_info_ref;
        inline app::LizardSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::LizardSpawnTask__Class>(type_info, "", "LizardSpawnTask");
        }
        inline app::LizardSpawnTask* create() {
            return il2cpp::create_object<app::LizardSpawnTask>(get_class());
        }
    } // namespace LizardSpawnTask
} // namespace app::classes::types
