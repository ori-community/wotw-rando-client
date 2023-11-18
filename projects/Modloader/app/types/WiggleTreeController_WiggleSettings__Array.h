#pragma once
#include <Modloader/app/structs/WiggleTreeController_WiggleSettings__Array.h>
#include <Modloader/app/structs/WiggleTreeController_WiggleSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WiggleTreeController_WiggleSettings__Array {
        inline app::WiggleTreeController_WiggleSettings__Array__Class** type_info() {
            static app::WiggleTreeController_WiggleSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WiggleTreeController_WiggleSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WiggleTreeController_WiggleSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::WiggleTreeController_WiggleSettings__Array__Class>(type_info(), "", "WiggleTreeController+WiggleSettings[]");
        }
        inline app::WiggleTreeController_WiggleSettings__Array* create() {
            return il2cpp::create_object<app::WiggleTreeController_WiggleSettings__Array>(get_class());
        }
    } // namespace WiggleTreeController_WiggleSettings__Array
} // namespace app::classes::types
