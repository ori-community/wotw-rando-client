#pragma once
#include <Modloader/app/structs/PauseMenuProgressElements.h>
#include <Modloader/app/structs/PauseMenuProgressElements__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PauseMenuProgressElements {
        inline app::PauseMenuProgressElements__Class** type_info() {
            static app::PauseMenuProgressElements__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PauseMenuProgressElements__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PauseMenuProgressElements__Class* get_class() {
            return il2cpp::get_class<app::PauseMenuProgressElements__Class>(type_info(), "", "PauseMenuProgressElements");
        }
        inline app::PauseMenuProgressElements* create() {
            return il2cpp::create_object<app::PauseMenuProgressElements>(get_class());
        }
    } // namespace PauseMenuProgressElements
} // namespace app::classes::types
