#pragma once
#include <Modloader/app/structs/LizardSpawnType__Enum.h>
#include <Modloader/app/structs/LizardSpawnType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardSpawnType__Enum {
        inline app::LizardSpawnType__Enum__Class** type_info() {
            static app::LizardSpawnType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardSpawnType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardSpawnType__Enum__Class* get_class() {
            return il2cpp::get_class<app::LizardSpawnType__Enum__Class>(type_info(), "", "LizardSpawnType");
        }
        inline app::LizardSpawnType__Enum* create() {
            return il2cpp::create_object<app::LizardSpawnType__Enum>(get_class());
        }
    } // namespace LizardSpawnType__Enum
} // namespace app::classes::types
