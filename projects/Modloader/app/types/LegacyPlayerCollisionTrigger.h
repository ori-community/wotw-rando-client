#pragma once
#include <Modloader/app/structs/LegacyPlayerCollisionTrigger.h>
#include <Modloader/app/structs/LegacyPlayerCollisionTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyPlayerCollisionTrigger {
        inline app::LegacyPlayerCollisionTrigger__Class** type_info() {
            static app::LegacyPlayerCollisionTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyPlayerCollisionTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyPlayerCollisionTrigger__Class* get_class() {
            return il2cpp::get_class<app::LegacyPlayerCollisionTrigger__Class>(type_info(), "", "LegacyPlayerCollisionTrigger");
        }
        inline app::LegacyPlayerCollisionTrigger* create() {
            return il2cpp::create_object<app::LegacyPlayerCollisionTrigger>(get_class());
        }
    } // namespace LegacyPlayerCollisionTrigger
} // namespace app::classes::types
