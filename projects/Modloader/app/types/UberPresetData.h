#pragma once
#include <Modloader/app/structs/UberPresetData.h>
#include <Modloader/app/structs/UberPresetData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPresetData {
        inline app::UberPresetData__Class** type_info() {
            static app::UberPresetData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPresetData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPresetData__Class* get_class() {
            return il2cpp::get_class<app::UberPresetData__Class>(type_info(), "", "UberPresetData");
        }
        inline app::UberPresetData* create() {
            return il2cpp::create_object<app::UberPresetData>(get_class());
        }
    } // namespace UberPresetData
} // namespace app::classes::types
