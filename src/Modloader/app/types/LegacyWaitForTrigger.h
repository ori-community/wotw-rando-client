#pragma once
#include <Modloader/app/structs/LegacyWaitForTrigger.h>
#include <Modloader/app/structs/LegacyWaitForTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyWaitForTrigger {
        inline app::LegacyWaitForTrigger__Class** type_info() {
            static app::LegacyWaitForTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyWaitForTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyWaitForTrigger__Class* get_class() {
            return il2cpp::get_class<app::LegacyWaitForTrigger__Class>(type_info(), "", "LegacyWaitForTrigger");
        }
        inline app::LegacyWaitForTrigger* create() {
            return il2cpp::create_object<app::LegacyWaitForTrigger>(get_class());
        }
    } // namespace LegacyWaitForTrigger
} // namespace app::classes::types
