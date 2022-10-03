#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxControllerRenderer_ButtonContainer__Array {
        namespace {
            app::XboxControllerRenderer_ButtonContainer__Array__Class* type_info_ref = nullptr;
        }
        app::XboxControllerRenderer_ButtonContainer__Array__Class** type_info = &type_info_ref;
        inline app::XboxControllerRenderer_ButtonContainer__Array__Class* get_class() {
            return il2cpp::get_class<app::XboxControllerRenderer_ButtonContainer__Array__Class>(type_info, "", "XboxControllerRenderer+ButtonContainer[]");
        }
        inline app::XboxControllerRenderer_ButtonContainer__Array* create() {
            return il2cpp::create_object<app::XboxControllerRenderer_ButtonContainer__Array>(get_class());
        }
    } // namespace XboxControllerRenderer_ButtonContainer__Array
} // namespace app::classes::types
