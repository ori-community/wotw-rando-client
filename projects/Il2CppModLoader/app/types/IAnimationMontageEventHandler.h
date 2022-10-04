#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAnimationMontageEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAnimationMontageEventHandler__Class** type_info;
        inline app::IAnimationMontageEventHandler__Class* get_class() {
            return il2cpp::get_class<app::IAnimationMontageEventHandler__Class>(type_info, "Moon", "IAnimationMontageEventHandler");
        }
        inline app::IAnimationMontageEventHandler* create() {
            return il2cpp::create_object<app::IAnimationMontageEventHandler>(get_class());
        }
    } // namespace IAnimationMontageEventHandler
} // namespace app::classes::types
