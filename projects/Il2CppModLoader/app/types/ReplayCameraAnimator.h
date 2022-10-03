#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReplayCameraAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReplayCameraAnimator__Class** type_info;
        inline app::ReplayCameraAnimator__Class* get_class() {
            return il2cpp::get_class<app::ReplayCameraAnimator__Class>(type_info, "Moon.Timeline", "ReplayCameraAnimator");
        }
        inline app::ReplayCameraAnimator* create() {
            return il2cpp::create_object<app::ReplayCameraAnimator>(get_class());
        }
    } // namespace ReplayCameraAnimator
} // namespace app::classes::types
