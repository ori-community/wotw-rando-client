#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberMotionBlurInterestZone_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberMotionBlurInterestZone_c__Class** type_info;
        inline app::UberMotionBlurInterestZone_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberMotionBlurInterestZone_c__Class>(type_info, "", "UberMotionBlurInterestZone", "<>c");
        }
        inline app::UberMotionBlurInterestZone_c* create() {
            return il2cpp::create_object<app::UberMotionBlurInterestZone_c>(get_class());
        }
    } // namespace UberMotionBlurInterestZone_c
} // namespace app::classes::types
