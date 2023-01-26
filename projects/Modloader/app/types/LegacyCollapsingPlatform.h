#pragma once
#include <Modloader/app/structs/LegacyCollapsingPlatform.h>
#include <Modloader/app/structs/LegacyCollapsingPlatform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyCollapsingPlatform {
        inline app::LegacyCollapsingPlatform__Class** type_info() {
            static app::LegacyCollapsingPlatform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyCollapsingPlatform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyCollapsingPlatform__Class* get_class() {
            return il2cpp::get_class<app::LegacyCollapsingPlatform__Class>(type_info(), "", "LegacyCollapsingPlatform");
        }
        inline app::LegacyCollapsingPlatform* create() {
            return il2cpp::create_object<app::LegacyCollapsingPlatform>(get_class());
        }
    } // namespace LegacyCollapsingPlatform
} // namespace app::classes::types
