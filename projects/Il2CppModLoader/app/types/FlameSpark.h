#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlameSpark {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FlameSpark__Class** type_info;
        inline app::FlameSpark__Class* get_class() {
            return il2cpp::get_class<app::FlameSpark__Class>(type_info, "Moon", "FlameSpark");
        }
        inline app::FlameSpark* create() {
            return il2cpp::create_object<app::FlameSpark>(get_class());
        }
    } // namespace FlameSpark
} // namespace app::classes::types
