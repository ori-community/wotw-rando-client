#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyCollapsingPlatform {
        namespace {
            app::LegacyCollapsingPlatform__Class* type_info_ref = nullptr;
        }
        app::LegacyCollapsingPlatform__Class** type_info = &type_info_ref;
        inline app::LegacyCollapsingPlatform__Class* get_class() {
            return il2cpp::get_class<app::LegacyCollapsingPlatform__Class>(type_info, "", "LegacyCollapsingPlatform");
        }
        inline app::LegacyCollapsingPlatform* create() {
            return il2cpp::create_object<app::LegacyCollapsingPlatform>(get_class());
        }
    } // namespace LegacyCollapsingPlatform
} // namespace app::classes::types
