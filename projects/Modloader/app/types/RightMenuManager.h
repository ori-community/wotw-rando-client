#pragma once
#include <Modloader/app/structs/RightMenuManager.h>
#include <Modloader/app/structs/RightMenuManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RightMenuManager {
        inline app::RightMenuManager__Class** type_info() {
            static app::RightMenuManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RightMenuManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RightMenuManager__Class* get_class() {
            return il2cpp::get_class<app::RightMenuManager__Class>(type_info(), "", "RightMenuManager");
        }
        inline app::RightMenuManager* create() {
            return il2cpp::create_object<app::RightMenuManager>(get_class());
        }
    } // namespace RightMenuManager
} // namespace app::classes::types
