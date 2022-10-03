#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseGameObjectSystem_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WwiseGameObjectSystem_c__Class** type_info;
        inline app::WwiseGameObjectSystem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseGameObjectSystem_c__Class>(type_info, "Moon.Wwise", "WwiseGameObjectSystem", "<>c");
        }
        inline app::WwiseGameObjectSystem_c* create() {
            return il2cpp::create_object<app::WwiseGameObjectSystem_c>(get_class());
        }
    } // namespace WwiseGameObjectSystem_c
} // namespace app::classes::types
