#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AmbienceZone {
        namespace {
            app::AmbienceZone__Class* type_info_ref = nullptr;
        }
        app::AmbienceZone__Class** type_info = &type_info_ref;
        inline app::AmbienceZone__Class* get_class() {
            return il2cpp::get_class<app::AmbienceZone__Class>(type_info, "", "AmbienceZone");
        }
        inline app::AmbienceZone* create() {
            return il2cpp::create_object<app::AmbienceZone>(get_class());
        }
    } // namespace AmbienceZone
} // namespace app::classes::types
