#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageLayer__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageLayer__Enum__Class** type_info;
        inline app::DamageLayer__Enum__Class* get_class() {
            return il2cpp::get_class<app::DamageLayer__Enum__Class>(type_info, "Moon", "DamageLayer");
        }
        inline app::DamageLayer__Enum* create() {
            return il2cpp::create_object<app::DamageLayer__Enum>(get_class());
        }
    } // namespace DamageLayer__Enum
} // namespace app::classes::types
