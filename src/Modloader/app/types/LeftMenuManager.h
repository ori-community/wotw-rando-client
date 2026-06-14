#pragma once
#include <Modloader/app/structs/LeftMenuManager.h>
#include <Modloader/app/structs/LeftMenuManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeftMenuManager {
        inline app::LeftMenuManager__Class** type_info() {
            static app::LeftMenuManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeftMenuManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeftMenuManager__Class* get_class() {
            return il2cpp::get_class<app::LeftMenuManager__Class>(type_info(), "", "LeftMenuManager");
        }
        inline app::LeftMenuManager* create() {
            return il2cpp::create_object<app::LeftMenuManager>(get_class());
        }
    } // namespace LeftMenuManager
} // namespace app::classes::types
