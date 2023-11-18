#pragma once
#include <Modloader/app/structs/NPCSettings.h>
#include <Modloader/app/structs/NPCSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NPCSettings {
        inline app::NPCSettings__Class** type_info() {
            static app::NPCSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NPCSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NPCSettings__Class* get_class() {
            return il2cpp::get_class<app::NPCSettings__Class>(type_info(), "Moon", "NPCSettings");
        }
        inline app::NPCSettings* create() {
            return il2cpp::create_object<app::NPCSettings>(get_class());
        }
    } // namespace NPCSettings
} // namespace app::classes::types
