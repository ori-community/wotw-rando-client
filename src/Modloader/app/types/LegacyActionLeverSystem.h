#pragma once
#include <Modloader/app/structs/LegacyActionLeverSystem.h>
#include <Modloader/app/structs/LegacyActionLeverSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyActionLeverSystem {
        inline app::LegacyActionLeverSystem__Class** type_info() {
            static app::LegacyActionLeverSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyActionLeverSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyActionLeverSystem__Class* get_class() {
            return il2cpp::get_class<app::LegacyActionLeverSystem__Class>(type_info(), "", "LegacyActionLeverSystem");
        }
        inline app::LegacyActionLeverSystem* create() {
            return il2cpp::create_object<app::LegacyActionLeverSystem>(get_class());
        }
    } // namespace LegacyActionLeverSystem
} // namespace app::classes::types
