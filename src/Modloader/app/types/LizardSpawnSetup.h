#pragma once
#include <Modloader/app/structs/LizardSpawnSetup.h>
#include <Modloader/app/structs/LizardSpawnSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardSpawnSetup {
        inline app::LizardSpawnSetup__Class** type_info() {
            static app::LizardSpawnSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardSpawnSetup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardSpawnSetup__Class* get_class() {
            return il2cpp::get_class<app::LizardSpawnSetup__Class>(type_info(), "", "LizardSpawnSetup");
        }
        inline app::LizardSpawnSetup* create() {
            return il2cpp::create_object<app::LizardSpawnSetup>(get_class());
        }
    } // namespace LizardSpawnSetup
} // namespace app::classes::types
