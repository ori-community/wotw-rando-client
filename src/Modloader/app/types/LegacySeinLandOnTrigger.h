#pragma once
#include <Modloader/app/structs/LegacySeinLandOnTrigger.h>
#include <Modloader/app/structs/LegacySeinLandOnTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacySeinLandOnTrigger {
        inline app::LegacySeinLandOnTrigger__Class** type_info() {
            static app::LegacySeinLandOnTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacySeinLandOnTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacySeinLandOnTrigger__Class* get_class() {
            return il2cpp::get_class<app::LegacySeinLandOnTrigger__Class>(type_info(), "", "LegacySeinLandOnTrigger");
        }
        inline app::LegacySeinLandOnTrigger* create() {
            return il2cpp::create_object<app::LegacySeinLandOnTrigger>(get_class());
        }
    } // namespace LegacySeinLandOnTrigger
} // namespace app::classes::types
