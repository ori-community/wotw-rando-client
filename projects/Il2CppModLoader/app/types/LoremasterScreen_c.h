#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoremasterScreen_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoremasterScreen_c__Class** type_info;
        inline app::LoremasterScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LoremasterScreen_c__Class>(type_info, "", "LoremasterScreen", "<>c");
        }
        inline app::LoremasterScreen_c* create() {
            return il2cpp::create_object<app::LoremasterScreen_c>(get_class());
        }
    } // namespace LoremasterScreen_c
} // namespace app::classes::types
