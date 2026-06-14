#pragma once
#include <Modloader/app/structs/LegacyGameObjectDisabler.h>
#include <Modloader/app/structs/LegacyGameObjectDisabler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyGameObjectDisabler {
        inline app::LegacyGameObjectDisabler__Class** type_info() {
            static app::LegacyGameObjectDisabler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyGameObjectDisabler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyGameObjectDisabler__Class* get_class() {
            return il2cpp::get_class<app::LegacyGameObjectDisabler__Class>(type_info(), "", "LegacyGameObjectDisabler");
        }
        inline app::LegacyGameObjectDisabler* create() {
            return il2cpp::create_object<app::LegacyGameObjectDisabler>(get_class());
        }
    } // namespace LegacyGameObjectDisabler
} // namespace app::classes::types
