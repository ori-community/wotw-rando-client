#pragma once
#include <Modloader/app/structs/LegacySpring.h>
#include <Modloader/app/structs/LegacySpring__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacySpring {
        inline app::LegacySpring__Class** type_info() {
            static app::LegacySpring__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacySpring__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacySpring__Class* get_class() {
            return il2cpp::get_class<app::LegacySpring__Class>(type_info(), "", "LegacySpring");
        }
        inline app::LegacySpring* create() {
            return il2cpp::create_object<app::LegacySpring>(get_class());
        }
    } // namespace LegacySpring
} // namespace app::classes::types
