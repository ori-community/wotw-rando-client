#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SunShafts {
        namespace {
            inline app::SunShafts__Class* type_info_ref = nullptr;
        }
        inline app::SunShafts__Class** type_info = &type_info_ref;
        inline app::SunShafts__Class* get_class() {
            return il2cpp::get_class<app::SunShafts__Class>(type_info, "UnityStandardAssets.ImageEffects", "SunShafts");
        }
        inline app::SunShafts* create() {
            return il2cpp::create_object<app::SunShafts>(get_class());
        }
    } // namespace SunShafts
} // namespace app::classes::types
