#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WiggleTreeController_WiggleSettings__Array {
        namespace {
            app::WiggleTreeController_WiggleSettings__Array__Class* type_info_ref = nullptr;
        }
        app::WiggleTreeController_WiggleSettings__Array__Class** type_info = &type_info_ref;
        inline app::WiggleTreeController_WiggleSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::WiggleTreeController_WiggleSettings__Array__Class>(type_info, "", "WiggleTreeController+WiggleSettings[]");
        }
        inline app::WiggleTreeController_WiggleSettings__Array* create() {
            return il2cpp::create_object<app::WiggleTreeController_WiggleSettings__Array>(get_class());
        }
    } // namespace WiggleTreeController_WiggleSettings__Array
} // namespace app::classes::types
