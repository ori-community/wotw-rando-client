#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CC_Levels {
        namespace {
            app::CC_Levels__Class* type_info_ref = nullptr;
        }
        app::CC_Levels__Class** type_info = &type_info_ref;
        inline app::CC_Levels__Class* get_class() {
            return il2cpp::get_class<app::CC_Levels__Class>(type_info, "", "CC_Levels");
        }
        inline app::CC_Levels* create() {
            return il2cpp::create_object<app::CC_Levels>(get_class());
        }
    } // namespace CC_Levels
} // namespace app::classes::types
