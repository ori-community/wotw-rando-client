#pragma once
#include <Modloader/app/structs/WiggleTreeController_WiggleSettings.h>
#include <Modloader/app/structs/WiggleTreeController_WiggleSettings__Array.h>
#include <Modloader/app/structs/WiggleTreeController_WiggleSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WiggleTreeController_WiggleSettings {
        inline app::WiggleTreeController_WiggleSettings__Class** type_info() {
            static app::WiggleTreeController_WiggleSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WiggleTreeController_WiggleSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WiggleTreeController_WiggleSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::WiggleTreeController_WiggleSettings__Class>(type_info(), "", "WiggleTreeController", "WiggleSettings");
        }
        inline app::WiggleTreeController_WiggleSettings* create() {
            return il2cpp::create_object<app::WiggleTreeController_WiggleSettings>(get_class());
        }
        inline app::WiggleTreeController_WiggleSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::WiggleTreeController_WiggleSettings__Array>(get_class(), size);
        }
        inline app::WiggleTreeController_WiggleSettings__Array* create_array(const std::vector<app::WiggleTreeController_WiggleSettings*>& items) {
            return il2cpp::array_new<app::WiggleTreeController_WiggleSettings__Array>(get_class(), items);
        }
    } // namespace WiggleTreeController_WiggleSettings
} // namespace app::classes::types
