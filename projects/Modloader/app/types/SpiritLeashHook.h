#pragma once
#include <Modloader/app/structs/SpiritLeashHook.h>
#include <Modloader/app/structs/SpiritLeashHook__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLeashHook {
        inline app::SpiritLeashHook__Class** type_info() {
            static app::SpiritLeashHook__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLeashHook__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLeashHook__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashHook__Class>(type_info(), "", "SpiritLeashHook");
        }
        inline app::SpiritLeashHook* create() {
            return il2cpp::create_object<app::SpiritLeashHook>(get_class());
        }
    } // namespace SpiritLeashHook
} // namespace app::classes::types
