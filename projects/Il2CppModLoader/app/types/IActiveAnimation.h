#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IActiveAnimation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IActiveAnimation__Class** type_info;
        inline app::IActiveAnimation__Class* get_class() {
            return il2cpp::get_class<app::IActiveAnimation__Class>(type_info, "Moon", "IActiveAnimation");
        }
        inline app::IActiveAnimation* create() {
            return il2cpp::create_object<app::IActiveAnimation>(get_class());
        }
    } // namespace IActiveAnimation
} // namespace app::classes::types
