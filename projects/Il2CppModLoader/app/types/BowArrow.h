#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BowArrow {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BowArrow__Class** type_info;
        inline app::BowArrow__Class* get_class() {
            return il2cpp::get_class<app::BowArrow__Class>(type_info, "", "BowArrow");
        }
        inline app::BowArrow* create() {
            return il2cpp::create_object<app::BowArrow>(get_class());
        }
    } // namespace BowArrow
} // namespace app::classes::types
