#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TweenLocalXValueProvider {
        namespace {
            app::TweenLocalXValueProvider__Class* type_info_ref = nullptr;
        }
        app::TweenLocalXValueProvider__Class** type_info = &type_info_ref;
        inline app::TweenLocalXValueProvider__Class* get_class() {
            return il2cpp::get_class<app::TweenLocalXValueProvider__Class>(type_info, "Moon", "TweenLocalXValueProvider");
        }
        inline app::TweenLocalXValueProvider* create() {
            return il2cpp::create_object<app::TweenLocalXValueProvider>(get_class());
        }
    } // namespace TweenLocalXValueProvider
} // namespace app::classes::types
