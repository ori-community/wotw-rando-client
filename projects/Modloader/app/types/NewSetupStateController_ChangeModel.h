#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NewSetupStateController_ChangeModel {
        inline app::NewSetupStateController_ChangeModel__Class** type_info = (app::NewSetupStateController_ChangeModel__Class**)(modloader::win::memory::resolve_rva(0x0472BCD8));
        inline app::NewSetupStateController_ChangeModel__Class* get_class() {
            return il2cpp::get_nested_class<app::NewSetupStateController_ChangeModel__Class>(type_info, "", "NewSetupStateController", "ChangeModel");
        }
        inline app::NewSetupStateController_ChangeModel* create() {
            return il2cpp::create_object<app::NewSetupStateController_ChangeModel>(get_class());
        }
    } // namespace NewSetupStateController_ChangeModel
} // namespace app::classes::types
