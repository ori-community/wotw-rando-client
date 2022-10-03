#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeSandWormTailPost {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NativeSandWormTailPost__Class** type_info;
        inline app::NativeSandWormTailPost__Class* get_class() {
            return il2cpp::get_class<app::NativeSandWormTailPost__Class>(type_info, "", "NativeSandWormTailPost");
        }
        inline app::NativeSandWormTailPost* create() {
            return il2cpp::create_object<app::NativeSandWormTailPost>(get_class());
        }
    } // namespace NativeSandWormTailPost
} // namespace app::classes::types
