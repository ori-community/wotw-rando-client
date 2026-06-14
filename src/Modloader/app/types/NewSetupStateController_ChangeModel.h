#pragma once
#include <Modloader/app/structs/NewSetupStateController_ChangeModel.h>
#include <Modloader/app/structs/NewSetupStateController_ChangeModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewSetupStateController_ChangeModel {
        inline app::NewSetupStateController_ChangeModel__Class** type_info() {
            static app::NewSetupStateController_ChangeModel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NewSetupStateController_ChangeModel__Class**)(modloader::win::memory::resolve_rva(0x0472BCD8));
            }
            return cache;
        }
        inline app::NewSetupStateController_ChangeModel__Class* get_class() {
            return il2cpp::get_nested_class<app::NewSetupStateController_ChangeModel__Class>(type_info(), "", "NewSetupStateController", "ChangeModel");
        }
        inline app::NewSetupStateController_ChangeModel* create() {
            return il2cpp::create_object<app::NewSetupStateController_ChangeModel>(get_class());
        }
    } // namespace NewSetupStateController_ChangeModel
} // namespace app::classes::types
