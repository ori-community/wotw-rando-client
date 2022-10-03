#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LookBlendAnimationControl {
        namespace {
            app::LookBlendAnimationControl__Class* type_info_ref = nullptr;
        }
        app::LookBlendAnimationControl__Class** type_info = &type_info_ref;
        inline app::LookBlendAnimationControl__Class* get_class() {
            return il2cpp::get_class<app::LookBlendAnimationControl__Class>(type_info, "", "LookBlendAnimationControl");
        }
        inline app::LookBlendAnimationControl* create() {
            return il2cpp::create_object<app::LookBlendAnimationControl>(get_class());
        }
    } // namespace LookBlendAnimationControl
} // namespace app::classes::types
