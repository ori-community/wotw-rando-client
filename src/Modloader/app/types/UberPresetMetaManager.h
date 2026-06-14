#pragma once
#include <Modloader/app/structs/UberPresetMetaManager.h>
#include <Modloader/app/structs/UberPresetMetaManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPresetMetaManager {
        inline app::UberPresetMetaManager__Class** type_info() {
            static app::UberPresetMetaManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPresetMetaManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPresetMetaManager__Class* get_class() {
            return il2cpp::get_class<app::UberPresetMetaManager__Class>(type_info(), "", "UberPresetMetaManager");
        }
        inline app::UberPresetMetaManager* create() {
            return il2cpp::create_object<app::UberPresetMetaManager>(get_class());
        }
    } // namespace UberPresetMetaManager
} // namespace app::classes::types
