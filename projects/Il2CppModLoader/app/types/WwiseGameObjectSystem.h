#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseGameObjectSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WwiseGameObjectSystem__Class** type_info;
        inline app::WwiseGameObjectSystem__Class* get_class() {
            return il2cpp::get_class<app::WwiseGameObjectSystem__Class>(type_info, "Moon.Wwise", "WwiseGameObjectSystem");
        }
        inline app::WwiseGameObjectSystem* create() {
            return il2cpp::create_object<app::WwiseGameObjectSystem>(get_class());
        }
    } // namespace WwiseGameObjectSystem
} // namespace app::classes::types
