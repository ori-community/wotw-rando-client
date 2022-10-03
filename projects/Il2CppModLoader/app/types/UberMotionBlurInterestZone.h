#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberMotionBlurInterestZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberMotionBlurInterestZone__Class** type_info;
        inline app::UberMotionBlurInterestZone__Class* get_class() {
            return il2cpp::get_class<app::UberMotionBlurInterestZone__Class>(type_info, "", "UberMotionBlurInterestZone");
        }
        inline app::UberMotionBlurInterestZone* create() {
            return il2cpp::create_object<app::UberMotionBlurInterestZone>(get_class());
        }
        inline app::UberMotionBlurInterestZone__Array* create_array(int size) {
            return il2cpp::array_new<app::UberMotionBlurInterestZone__Array>(get_class(), size);
        }
    } // namespace UberMotionBlurInterestZone
} // namespace app::classes::types
