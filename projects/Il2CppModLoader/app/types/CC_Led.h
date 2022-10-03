#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CC_Led {
        namespace {
            app::CC_Led__Class* type_info_ref = nullptr;
        }
        app::CC_Led__Class** type_info = &type_info_ref;
        inline app::CC_Led__Class* get_class() {
            return il2cpp::get_class<app::CC_Led__Class>(type_info, "", "CC_Led");
        }
        inline app::CC_Led* create() {
            return il2cpp::create_object<app::CC_Led>(get_class());
        }
    } // namespace CC_Led
} // namespace app::classes::types
