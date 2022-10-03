#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Lever_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Lever_c__Class** type_info;
        inline app::Lever_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Lever_c__Class>(type_info, "", "Lever", "<>c");
        }
        inline app::Lever_c* create() {
            return il2cpp::create_object<app::Lever_c>(get_class());
        }
    } // namespace Lever_c
} // namespace app::classes::types
