#pragma once
#include <Modloader/app/structs/LegacySpiritLeashHook.h>
#include <Modloader/app/structs/LegacySpiritLeashHook__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacySpiritLeashHook {
        inline app::LegacySpiritLeashHook__Class** type_info() {
            static app::LegacySpiritLeashHook__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacySpiritLeashHook__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacySpiritLeashHook__Class* get_class() {
            return il2cpp::get_class<app::LegacySpiritLeashHook__Class>(type_info(), "", "LegacySpiritLeashHook");
        }
        inline app::LegacySpiritLeashHook* create() {
            return il2cpp::create_object<app::LegacySpiritLeashHook>(get_class());
        }
    } // namespace LegacySpiritLeashHook
} // namespace app::classes::types
