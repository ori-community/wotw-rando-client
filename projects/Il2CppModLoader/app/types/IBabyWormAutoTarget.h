#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBabyWormAutoTarget {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBabyWormAutoTarget__Class** type_info;
        inline app::IBabyWormAutoTarget__Class* get_class() {
            return il2cpp::get_class<app::IBabyWormAutoTarget__Class>(type_info, "", "IBabyWormAutoTarget");
        }
        inline app::IBabyWormAutoTarget* create() {
            return il2cpp::create_object<app::IBabyWormAutoTarget>(get_class());
        }
    } // namespace IBabyWormAutoTarget
} // namespace app::classes::types
