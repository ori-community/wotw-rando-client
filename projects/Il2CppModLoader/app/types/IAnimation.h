#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAnimation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAnimation__Class** type_info;
        inline app::IAnimation__Class* get_class() {
            return il2cpp::get_class<app::IAnimation__Class>(type_info, "Moon", "IAnimation");
        }
        inline app::IAnimation* create() {
            return il2cpp::create_object<app::IAnimation>(get_class());
        }
    } // namespace IAnimation
} // namespace app::classes::types
