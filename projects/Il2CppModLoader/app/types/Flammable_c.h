#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Flammable_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Flammable_c__Class** type_info;
        inline app::Flammable_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Flammable_c__Class>(type_info, "Moon", "Flammable", "<>c");
        }
        inline app::Flammable_c* create() {
            return il2cpp::create_object<app::Flammable_c>(get_class());
        }
    } // namespace Flammable_c
} // namespace app::classes::types
