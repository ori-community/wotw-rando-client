#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PearsonHash {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PearsonHash__Class** type_info;
        inline app::PearsonHash__Class* get_class() {
            return il2cpp::get_class<app::PearsonHash__Class>(type_info, "Moon", "PearsonHash");
        }
        inline app::PearsonHash* create() {
            return il2cpp::create_object<app::PearsonHash>(get_class());
        }
    } // namespace PearsonHash
} // namespace app::classes::types
