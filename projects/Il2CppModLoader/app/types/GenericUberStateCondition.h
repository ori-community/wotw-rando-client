#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericUberStateCondition {
        namespace {
            app::GenericUberStateCondition__Class* type_info_ref = nullptr;
        }
        app::GenericUberStateCondition__Class** type_info = &type_info_ref;
        inline app::GenericUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::GenericUberStateCondition__Class>(type_info, "", "GenericUberStateCondition");
        }
        inline app::GenericUberStateCondition* create() {
            return il2cpp::create_object<app::GenericUberStateCondition>(get_class());
        }
    } // namespace GenericUberStateCondition
} // namespace app::classes::types
