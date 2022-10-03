#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TweenYBasedLerpValueProvider {
        namespace {
            app::TweenYBasedLerpValueProvider__Class* type_info_ref = nullptr;
        }
        app::TweenYBasedLerpValueProvider__Class** type_info = &type_info_ref;
        inline app::TweenYBasedLerpValueProvider__Class* get_class() {
            return il2cpp::get_class<app::TweenYBasedLerpValueProvider__Class>(type_info, "Moon", "TweenYBasedLerpValueProvider");
        }
        inline app::TweenYBasedLerpValueProvider* create() {
            return il2cpp::create_object<app::TweenYBasedLerpValueProvider>(get_class());
        }
    } // namespace TweenYBasedLerpValueProvider
} // namespace app::classes::types
