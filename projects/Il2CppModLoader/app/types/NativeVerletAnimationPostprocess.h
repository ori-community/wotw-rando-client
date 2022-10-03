#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeVerletAnimationPostprocess {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NativeVerletAnimationPostprocess__Class** type_info;
        inline app::NativeVerletAnimationPostprocess__Class* get_class() {
            return il2cpp::get_class<app::NativeVerletAnimationPostprocess__Class>(type_info, "Moon.Animation", "NativeVerletAnimationPostprocess");
        }
        inline app::NativeVerletAnimationPostprocess* create() {
            return il2cpp::create_object<app::NativeVerletAnimationPostprocess>(get_class());
        }
    } // namespace NativeVerletAnimationPostprocess
} // namespace app::classes::types
