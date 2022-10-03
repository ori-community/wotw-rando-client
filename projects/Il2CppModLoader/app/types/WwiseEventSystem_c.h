#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseEventSystem_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WwiseEventSystem_c__Class** type_info;
        inline app::WwiseEventSystem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseEventSystem_c__Class>(type_info, "Moon.Wwise", "WwiseEventSystem", "<>c");
        }
        inline app::WwiseEventSystem_c* create() {
            return il2cpp::create_object<app::WwiseEventSystem_c>(get_class());
        }
    } // namespace WwiseEventSystem_c
} // namespace app::classes::types
