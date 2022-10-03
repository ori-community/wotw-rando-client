#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultBinder_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultBinder_c__Class** type_info;
        inline app::DefaultBinder_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DefaultBinder_c__Class>(type_info, "System", "DefaultBinder", "<>c");
        }
        inline app::DefaultBinder_c* create() {
            return il2cpp::create_object<app::DefaultBinder_c>(get_class());
        }
    } // namespace DefaultBinder_c
} // namespace app::classes::types
