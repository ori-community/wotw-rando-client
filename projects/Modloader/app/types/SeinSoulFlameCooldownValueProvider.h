#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSoulFlameCooldownValueProvider {
        namespace {
            inline app::SeinSoulFlameCooldownValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinSoulFlameCooldownValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinSoulFlameCooldownValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinSoulFlameCooldownValueProvider__Class>(type_info, "", "SeinSoulFlameCooldownValueProvider");
        }
        inline app::SeinSoulFlameCooldownValueProvider* create() {
            return il2cpp::create_object<app::SeinSoulFlameCooldownValueProvider>(get_class());
        }
    } // namespace SeinSoulFlameCooldownValueProvider
} // namespace app::classes::types
