#pragma once
#include <Modloader/app/structs/KwolokTempLegStretch.h>
#include <Modloader/app/structs/KwolokTempLegStretch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokTempLegStretch {
        inline app::KwolokTempLegStretch__Class** type_info() {
            static app::KwolokTempLegStretch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokTempLegStretch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokTempLegStretch__Class* get_class() {
            return il2cpp::get_class<app::KwolokTempLegStretch__Class>(type_info(), "", "KwolokTempLegStretch");
        }
        inline app::KwolokTempLegStretch* create() {
            return il2cpp::create_object<app::KwolokTempLegStretch>(get_class());
        }
    } // namespace KwolokTempLegStretch
} // namespace app::classes::types
