#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBabySandWormAutoTarget {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBabySandWormAutoTarget__Class** type_info;
        inline app::IBabySandWormAutoTarget__Class* get_class() {
            return il2cpp::get_class<app::IBabySandWormAutoTarget__Class>(type_info, "", "IBabySandWormAutoTarget");
        }
        inline app::IBabySandWormAutoTarget* create() {
            return il2cpp::create_object<app::IBabySandWormAutoTarget>(get_class());
        }
    } // namespace IBabySandWormAutoTarget
} // namespace app::classes::types
