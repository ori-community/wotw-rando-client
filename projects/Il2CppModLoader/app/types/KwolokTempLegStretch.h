#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokTempLegStretch {
        namespace {
            app::KwolokTempLegStretch__Class* type_info_ref = nullptr;
        }
        app::KwolokTempLegStretch__Class** type_info = &type_info_ref;
        inline app::KwolokTempLegStretch__Class* get_class() {
            return il2cpp::get_class<app::KwolokTempLegStretch__Class>(type_info, "", "KwolokTempLegStretch");
        }
        inline app::KwolokTempLegStretch* create() {
            return il2cpp::create_object<app::KwolokTempLegStretch>(get_class());
        }
    } // namespace KwolokTempLegStretch
} // namespace app::classes::types
