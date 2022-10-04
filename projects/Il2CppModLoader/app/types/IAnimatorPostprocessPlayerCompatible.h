#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAnimatorPostprocessPlayerCompatible {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAnimatorPostprocessPlayerCompatible__Class** type_info;
        inline app::IAnimatorPostprocessPlayerCompatible__Class* get_class() {
            return il2cpp::get_class<app::IAnimatorPostprocessPlayerCompatible__Class>(type_info, "Moon.Animation", "IAnimatorPostprocessPlayerCompatible");
        }
        inline app::IAnimatorPostprocessPlayerCompatible* create() {
            return il2cpp::create_object<app::IAnimatorPostprocessPlayerCompatible>(get_class());
        }
    } // namespace IAnimatorPostprocessPlayerCompatible
} // namespace app::classes::types
