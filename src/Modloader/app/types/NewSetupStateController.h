#pragma once
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/NewSetupStateController__Array.h>
#include <Modloader/app/structs/NewSetupStateController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewSetupStateController {
        inline app::NewSetupStateController__Class** type_info() {
            static app::NewSetupStateController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NewSetupStateController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NewSetupStateController__Class* get_class() {
            return il2cpp::get_class<app::NewSetupStateController__Class>(type_info(), "", "NewSetupStateController");
        }
        inline app::NewSetupStateController* create() {
            return il2cpp::create_object<app::NewSetupStateController>(get_class());
        }
        inline app::NewSetupStateController__Array* create_array(int size) {
            return il2cpp::array_new<app::NewSetupStateController__Array>(get_class(), size);
        }
        inline app::NewSetupStateController__Array* create_array(const std::vector<app::NewSetupStateController*>& items) {
            return il2cpp::array_new<app::NewSetupStateController__Array>(get_class(), items);
        }
    } // namespace NewSetupStateController
} // namespace app::classes::types
