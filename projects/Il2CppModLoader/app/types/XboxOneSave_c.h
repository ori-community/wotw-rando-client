#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneSave_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneSave_c__Class** type_info;
        inline app::XboxOneSave_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneSave_c__Class>(type_info, "", "XboxOneSave", "<>c");
        }
        inline app::XboxOneSave_c* create() {
            return il2cpp::create_object<app::XboxOneSave_c>(get_class());
        }
    } // namespace XboxOneSave_c
} // namespace app::classes::types
