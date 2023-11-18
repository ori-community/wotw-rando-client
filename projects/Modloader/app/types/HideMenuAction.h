#pragma once
#include <Modloader/app/structs/HideMenuAction.h>
#include <Modloader/app/structs/HideMenuAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HideMenuAction {
        inline app::HideMenuAction__Class** type_info() {
            static app::HideMenuAction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HideMenuAction__Class**)(modloader::win::memory::resolve_rva(0x0475A748));
            }
            return cache;
        }
        inline app::HideMenuAction__Class* get_class() {
            return il2cpp::get_class<app::HideMenuAction__Class>(type_info(), "", "HideMenuAction");
        }
        inline app::HideMenuAction* create() {
            return il2cpp::create_object<app::HideMenuAction>(get_class());
        }
    } // namespace HideMenuAction
} // namespace app::classes::types
