#pragma once
#include <Modloader/app/structs/PauseMenuProgressElements_UberStateToElement__Array.h>
#include <Modloader/app/structs/PauseMenuProgressElements_UberStateToElement__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PauseMenuProgressElements_UberStateToElement__Array {
        inline app::PauseMenuProgressElements_UberStateToElement__Array__Class** type_info() {
            static app::PauseMenuProgressElements_UberStateToElement__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PauseMenuProgressElements_UberStateToElement__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PauseMenuProgressElements_UberStateToElement__Array__Class* get_class() {
            return il2cpp::get_class<app::PauseMenuProgressElements_UberStateToElement__Array__Class>(type_info(), "", "PauseMenuProgressElements+UberStateToElement[]");
        }
        inline app::PauseMenuProgressElements_UberStateToElement__Array* create() {
            return il2cpp::create_object<app::PauseMenuProgressElements_UberStateToElement__Array>(get_class());
        }
    } // namespace PauseMenuProgressElements_UberStateToElement__Array
} // namespace app::classes::types
