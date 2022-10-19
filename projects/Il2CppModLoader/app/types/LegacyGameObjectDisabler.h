#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyGameObjectDisabler {
        namespace {
            inline app::LegacyGameObjectDisabler__Class* type_info_ref = nullptr;
        }
        inline app::LegacyGameObjectDisabler__Class** type_info = &type_info_ref;
        inline app::LegacyGameObjectDisabler__Class* get_class() {
            return il2cpp::get_class<app::LegacyGameObjectDisabler__Class>(type_info, "", "LegacyGameObjectDisabler");
        }
        inline app::LegacyGameObjectDisabler* create() {
            return il2cpp::create_object<app::LegacyGameObjectDisabler>(get_class());
        }
    } // namespace LegacyGameObjectDisabler
} // namespace app::classes::types
