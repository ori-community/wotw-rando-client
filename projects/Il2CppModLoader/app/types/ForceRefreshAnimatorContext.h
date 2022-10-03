#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ForceRefreshAnimatorContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ForceRefreshAnimatorContext__Class** type_info;
        inline app::ForceRefreshAnimatorContext__Class* get_class() {
            return il2cpp::get_class<app::ForceRefreshAnimatorContext__Class>(type_info, "Moon.Timeline", "ForceRefreshAnimatorContext");
        }
        inline app::ForceRefreshAnimatorContext* create() {
            return il2cpp::create_object<app::ForceRefreshAnimatorContext>(get_class());
        }
    } // namespace ForceRefreshAnimatorContext
} // namespace app::classes::types
