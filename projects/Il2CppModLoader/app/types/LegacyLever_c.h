#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyLever_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyLever_c__Class** type_info;
        inline app::LegacyLever_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyLever_c__Class>(type_info, "", "LegacyLever", "<>c");
        }
        inline app::LegacyLever_c* create() {
            return il2cpp::create_object<app::LegacyLever_c>(get_class());
        }
    } // namespace LegacyLever_c
} // namespace app::classes::types
