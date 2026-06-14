#pragma once
#include <Modloader/app/structs/LegacyTrigger.h>
#include <Modloader/app/structs/LegacyTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyTrigger {
        inline app::LegacyTrigger__Class** type_info() {
            static app::LegacyTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyTrigger__Class* get_class() {
            return il2cpp::get_class<app::LegacyTrigger__Class>(type_info(), "", "LegacyTrigger");
        }
        inline app::LegacyTrigger* create() {
            return il2cpp::create_object<app::LegacyTrigger>(get_class());
        }
    } // namespace LegacyTrigger
} // namespace app::classes::types
