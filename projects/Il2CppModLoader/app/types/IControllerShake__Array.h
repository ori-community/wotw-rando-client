#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IControllerShake__Array {
        namespace {
            app::IControllerShake__Array__Class* type_info_ref = nullptr;
        }
        app::IControllerShake__Array__Class** type_info = &type_info_ref;
        inline app::IControllerShake__Array__Class* get_class() {
            return il2cpp::get_class<app::IControllerShake__Array__Class>(type_info, "", "IControllerShake[]");
        }
        inline app::IControllerShake__Array* create() {
            return il2cpp::create_object<app::IControllerShake__Array>(get_class());
        }
    } // namespace IControllerShake__Array
} // namespace app::classes::types
