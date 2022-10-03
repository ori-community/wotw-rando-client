#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseInput {
        namespace {
            app::BaseInput__Class* type_info_ref = nullptr;
        }
        app::BaseInput__Class** type_info = &type_info_ref;
        inline app::BaseInput__Class* get_class() {
            return il2cpp::get_class<app::BaseInput__Class>(type_info, "UnityEngine.EventSystems", "BaseInput");
        }
        inline app::BaseInput* create() {
            return il2cpp::create_object<app::BaseInput>(get_class());
        }
        inline app::BaseInput__Array* create_array(int size) {
            return il2cpp::array_new<app::BaseInput__Array>(get_class(), size);
        }
    } // namespace BaseInput
} // namespace app::classes::types
