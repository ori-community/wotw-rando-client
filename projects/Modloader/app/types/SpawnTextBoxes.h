#pragma once
#include <Modloader/app/structs/SpawnTextBoxes.h>
#include <Modloader/app/structs/SpawnTextBoxes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpawnTextBoxes {
        inline app::SpawnTextBoxes__Class** type_info() {
            static app::SpawnTextBoxes__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpawnTextBoxes__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpawnTextBoxes__Class* get_class() {
            return il2cpp::get_class<app::SpawnTextBoxes__Class>(type_info(), "", "SpawnTextBoxes");
        }
        inline app::SpawnTextBoxes* create() {
            return il2cpp::create_object<app::SpawnTextBoxes>(get_class());
        }
    } // namespace SpawnTextBoxes
} // namespace app::classes::types
