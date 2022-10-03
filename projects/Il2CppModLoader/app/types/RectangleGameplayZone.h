#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RectangleGameplayZone {
        namespace {
            app::RectangleGameplayZone__Class* type_info_ref = nullptr;
        }
        app::RectangleGameplayZone__Class** type_info = &type_info_ref;
        inline app::RectangleGameplayZone__Class* get_class() {
            return il2cpp::get_class<app::RectangleGameplayZone__Class>(type_info, "", "RectangleGameplayZone");
        }
        inline app::RectangleGameplayZone* create() {
            return il2cpp::create_object<app::RectangleGameplayZone>(get_class());
        }
    } // namespace RectangleGameplayZone
} // namespace app::classes::types
