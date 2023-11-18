#pragma once
#include <Modloader/app/structs/IdleOverride.h>
#include <Modloader/app/structs/IdleOverride__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IdleOverride {
        inline app::IdleOverride__Class** type_info() {
            static app::IdleOverride__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IdleOverride__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IdleOverride__Class* get_class() {
            return il2cpp::get_class<app::IdleOverride__Class>(type_info(), "", "IdleOverride");
        }
        inline app::IdleOverride* create() {
            return il2cpp::create_object<app::IdleOverride>(get_class());
        }
    } // namespace IdleOverride
} // namespace app::classes::types
