#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatorDriver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimatorDriver__Class** type_info;
        inline app::AnimatorDriver__Class* get_class() {
            return il2cpp::get_class<app::AnimatorDriver__Class>(type_info, "", "AnimatorDriver");
        }
        inline app::AnimatorDriver* create() {
            return il2cpp::create_object<app::AnimatorDriver>(get_class());
        }
    } // namespace AnimatorDriver
} // namespace app::classes::types
