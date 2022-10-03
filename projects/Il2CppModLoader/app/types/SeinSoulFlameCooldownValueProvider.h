#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSoulFlameCooldownValueProvider {
        namespace {
            app::SeinSoulFlameCooldownValueProvider__Class* type_info_ref = nullptr;
        }
        app::SeinSoulFlameCooldownValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinSoulFlameCooldownValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinSoulFlameCooldownValueProvider__Class>(type_info, "", "SeinSoulFlameCooldownValueProvider");
        }
        inline app::SeinSoulFlameCooldownValueProvider* create() {
            return il2cpp::create_object<app::SeinSoulFlameCooldownValueProvider>(get_class());
        }
    } // namespace SeinSoulFlameCooldownValueProvider
} // namespace app::classes::types
