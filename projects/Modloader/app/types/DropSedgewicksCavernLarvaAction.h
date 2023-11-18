#pragma once
#include <Modloader/app/structs/DropSedgewicksCavernLarvaAction.h>
#include <Modloader/app/structs/DropSedgewicksCavernLarvaAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSedgewicksCavernLarvaAction {
        inline app::DropSedgewicksCavernLarvaAction__Class** type_info() {
            static app::DropSedgewicksCavernLarvaAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropSedgewicksCavernLarvaAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropSedgewicksCavernLarvaAction__Class* get_class() {
            return il2cpp::get_class<app::DropSedgewicksCavernLarvaAction__Class>(type_info(), "", "DropSedgewicksCavernLarvaAction");
        }
        inline app::DropSedgewicksCavernLarvaAction* create() {
            return il2cpp::create_object<app::DropSedgewicksCavernLarvaAction>(get_class());
        }
    } // namespace DropSedgewicksCavernLarvaAction
} // namespace app::classes::types
