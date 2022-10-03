#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateValueStore {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateValueStore__Class** type_info;
        inline app::UberStateValueStore__Class* get_class() {
            return il2cpp::get_class<app::UberStateValueStore__Class>(type_info, "Moon", "UberStateValueStore");
        }
        inline app::UberStateValueStore* create() {
            return il2cpp::create_object<app::UberStateValueStore>(get_class());
        }
    } // namespace UberStateValueStore
} // namespace app::classes::types
