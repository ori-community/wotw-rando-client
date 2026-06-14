#pragma once
#include <Modloader/app/structs/LegacyLever.h>
#include <Modloader/app/structs/LegacyLever__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyLever {
        inline app::LegacyLever__Class** type_info() {
            static app::LegacyLever__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyLever__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyLever__Class* get_class() {
            return il2cpp::get_class<app::LegacyLever__Class>(type_info(), "", "LegacyLever");
        }
        inline app::LegacyLever* create() {
            return il2cpp::create_object<app::LegacyLever>(get_class());
        }
    } // namespace LegacyLever
} // namespace app::classes::types
