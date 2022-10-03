#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CC_RadialBlur {
        namespace {
            app::CC_RadialBlur__Class* type_info_ref = nullptr;
        }
        app::CC_RadialBlur__Class** type_info = &type_info_ref;
        inline app::CC_RadialBlur__Class* get_class() {
            return il2cpp::get_class<app::CC_RadialBlur__Class>(type_info, "", "CC_RadialBlur");
        }
        inline app::CC_RadialBlur* create() {
            return il2cpp::create_object<app::CC_RadialBlur>(get_class());
        }
    } // namespace CC_RadialBlur
} // namespace app::classes::types
