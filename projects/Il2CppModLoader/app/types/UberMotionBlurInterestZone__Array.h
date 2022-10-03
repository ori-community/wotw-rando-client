#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberMotionBlurInterestZone__Array {
        namespace {
            app::UberMotionBlurInterestZone__Array__Class* type_info_ref = nullptr;
        }
        app::UberMotionBlurInterestZone__Array__Class** type_info = &type_info_ref;
        inline app::UberMotionBlurInterestZone__Array__Class* get_class() {
            return il2cpp::get_class<app::UberMotionBlurInterestZone__Array__Class>(type_info, "", "UberMotionBlurInterestZone[]");
        }
        inline app::UberMotionBlurInterestZone__Array* create() {
            return il2cpp::create_object<app::UberMotionBlurInterestZone__Array>(get_class());
        }
    } // namespace UberMotionBlurInterestZone__Array
} // namespace app::classes::types
