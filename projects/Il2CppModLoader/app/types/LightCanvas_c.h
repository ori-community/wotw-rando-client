#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvas_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCanvas_c__Class** type_info;
        inline app::LightCanvas_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvas_c__Class>(type_info, "", "LightCanvas", "<>c");
        }
        inline app::LightCanvas_c* create() {
            return il2cpp::create_object<app::LightCanvas_c>(get_class());
        }
    } // namespace LightCanvas_c
} // namespace app::classes::types
