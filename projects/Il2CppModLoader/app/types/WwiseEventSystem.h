#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseEventSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WwiseEventSystem__Class** type_info;
        inline app::WwiseEventSystem__Class* get_class() {
            return il2cpp::get_class<app::WwiseEventSystem__Class>(type_info, "Moon.Wwise", "WwiseEventSystem");
        }
        inline app::WwiseEventSystem* create() {
            return il2cpp::create_object<app::WwiseEventSystem>(get_class());
        }
    } // namespace WwiseEventSystem
} // namespace app::classes::types
