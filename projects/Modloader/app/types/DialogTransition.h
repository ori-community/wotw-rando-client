#pragma once
#include <Modloader/app/structs/DialogTransition.h>
#include <Modloader/app/structs/DialogTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DialogTransition {
        inline app::DialogTransition__Class** type_info() {
            static app::DialogTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DialogTransition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DialogTransition__Class* get_class() {
            return il2cpp::get_class<app::DialogTransition__Class>(type_info(), "", "DialogTransition");
        }
        inline app::DialogTransition* create() {
            return il2cpp::create_object<app::DialogTransition>(get_class());
        }
    } // namespace DialogTransition
} // namespace app::classes::types
