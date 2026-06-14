#pragma once
#include <Modloader/app/structs/SeinSoulFlameCooldownValueProvider.h>
#include <Modloader/app/structs/SeinSoulFlameCooldownValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSoulFlameCooldownValueProvider {
        inline app::SeinSoulFlameCooldownValueProvider__Class** type_info() {
            static app::SeinSoulFlameCooldownValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSoulFlameCooldownValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSoulFlameCooldownValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinSoulFlameCooldownValueProvider__Class>(type_info(), "", "SeinSoulFlameCooldownValueProvider");
        }
        inline app::SeinSoulFlameCooldownValueProvider* create() {
            return il2cpp::create_object<app::SeinSoulFlameCooldownValueProvider>(get_class());
        }
    } // namespace SeinSoulFlameCooldownValueProvider
} // namespace app::classes::types
