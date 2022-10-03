#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IgnitableSpiritTorch_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IgnitableSpiritTorch_c__Class** type_info;
        inline app::IgnitableSpiritTorch_c__Class* get_class() {
            return il2cpp::get_nested_class<app::IgnitableSpiritTorch_c__Class>(type_info, "", "IgnitableSpiritTorch", "<>c");
        }
        inline app::IgnitableSpiritTorch_c* create() {
            return il2cpp::create_object<app::IgnitableSpiritTorch_c>(get_class());
        }
    } // namespace IgnitableSpiritTorch_c
} // namespace app::classes::types
