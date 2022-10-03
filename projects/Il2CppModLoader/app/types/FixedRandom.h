#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixedRandom {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FixedRandom__Class** type_info;
        inline app::FixedRandom__Class* get_class() {
            return il2cpp::get_class<app::FixedRandom__Class>(type_info, "", "FixedRandom");
        }
        inline app::FixedRandom* create() {
            return il2cpp::create_object<app::FixedRandom>(get_class());
        }
    } // namespace FixedRandom
} // namespace app::classes::types
