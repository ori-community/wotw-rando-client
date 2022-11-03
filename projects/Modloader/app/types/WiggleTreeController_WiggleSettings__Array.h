#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WiggleTreeController_WiggleSettings__Array {
        namespace {
            inline app::WiggleTreeController_WiggleSettings__Array__Class* type_info_ref = nullptr;
        }
        inline app::WiggleTreeController_WiggleSettings__Array__Class** type_info = &type_info_ref;
        inline app::WiggleTreeController_WiggleSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::WiggleTreeController_WiggleSettings__Array__Class>(type_info, "", "WiggleTreeController+WiggleSettings[]");
        }
        inline app::WiggleTreeController_WiggleSettings__Array* create() {
            return il2cpp::create_object<app::WiggleTreeController_WiggleSettings__Array>(get_class());
        }
    } // namespace WiggleTreeController_WiggleSettings__Array
} // namespace app::classes::types
