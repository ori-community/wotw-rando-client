#pragma once
#include <Modloader/app/structs/LegacyTimedTrigger.h>
#include <Modloader/app/structs/LegacyTimedTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyTimedTrigger {
        inline app::LegacyTimedTrigger__Class** type_info() {
            static app::LegacyTimedTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyTimedTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyTimedTrigger__Class* get_class() {
            return il2cpp::get_class<app::LegacyTimedTrigger__Class>(type_info(), "", "LegacyTimedTrigger");
        }
        inline app::LegacyTimedTrigger* create() {
            return il2cpp::create_object<app::LegacyTimedTrigger>(get_class());
        }
    } // namespace LegacyTimedTrigger
} // namespace app::classes::types
