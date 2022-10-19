#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokTempLegStretch {
        namespace {
            inline app::KwolokTempLegStretch__Class* type_info_ref = nullptr;
        }
        inline app::KwolokTempLegStretch__Class** type_info = &type_info_ref;
        inline app::KwolokTempLegStretch__Class* get_class() {
            return il2cpp::get_class<app::KwolokTempLegStretch__Class>(type_info, "", "KwolokTempLegStretch");
        }
        inline app::KwolokTempLegStretch* create() {
            return il2cpp::create_object<app::KwolokTempLegStretch>(get_class());
        }
    } // namespace KwolokTempLegStretch
} // namespace app::classes::types
