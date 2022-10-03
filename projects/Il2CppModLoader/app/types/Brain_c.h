#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Brain_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Brain_c__Class** type_info;
        inline app::Brain_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Brain_c__Class>(type_info, "Moon", "Brain", "<>c");
        }
        inline app::Brain_c* create() {
            return il2cpp::create_object<app::Brain_c>(get_class());
        }
    } // namespace Brain_c
} // namespace app::classes::types
