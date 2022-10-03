#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritTurret_FireState__Enum {
        namespace {
            app::SpiritTurret_FireState__Enum__Class* type_info_ref = nullptr;
        }
        app::SpiritTurret_FireState__Enum__Class** type_info = &type_info_ref;
        inline app::SpiritTurret_FireState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritTurret_FireState__Enum__Class>(type_info, "", "SpiritTurret", "FireState");
        }
        inline app::SpiritTurret_FireState__Enum* create() {
            return il2cpp::create_object<app::SpiritTurret_FireState__Enum>(get_class());
        }
    } // namespace SpiritTurret_FireState__Enum
} // namespace app::classes::types
