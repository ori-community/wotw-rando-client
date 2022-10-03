#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CC_Threshold {
        namespace {
            app::CC_Threshold__Class* type_info_ref = nullptr;
        }
        app::CC_Threshold__Class** type_info = &type_info_ref;
        inline app::CC_Threshold__Class* get_class() {
            return il2cpp::get_class<app::CC_Threshold__Class>(type_info, "", "CC_Threshold");
        }
        inline app::CC_Threshold* create() {
            return il2cpp::create_object<app::CC_Threshold>(get_class());
        }
    } // namespace CC_Threshold
} // namespace app::classes::types
