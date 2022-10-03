#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateCollection__Class** type_info;
        inline app::UberStateCollection__Class* get_class() {
            return il2cpp::get_class<app::UberStateCollection__Class>(type_info, "Moon", "UberStateCollection");
        }
        inline app::UberStateCollection* create() {
            return il2cpp::create_object<app::UberStateCollection>(get_class());
        }
    } // namespace UberStateCollection
} // namespace app::classes::types
