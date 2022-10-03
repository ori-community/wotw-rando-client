#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardSpawnTask {
        namespace {
            app::LizardSpawnTask__Class* type_info_ref = nullptr;
        }
        app::LizardSpawnTask__Class** type_info = &type_info_ref;
        inline app::LizardSpawnTask__Class* get_class() {
            return il2cpp::get_class<app::LizardSpawnTask__Class>(type_info, "", "LizardSpawnTask");
        }
        inline app::LizardSpawnTask* create() {
            return il2cpp::create_object<app::LizardSpawnTask>(get_class());
        }
    } // namespace LizardSpawnTask
} // namespace app::classes::types
