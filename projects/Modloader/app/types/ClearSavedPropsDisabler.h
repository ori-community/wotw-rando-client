#pragma once
#include <Modloader/app/structs/ClearSavedPropsDisabler.h>
#include <Modloader/app/structs/ClearSavedPropsDisabler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClearSavedPropsDisabler {
        inline app::ClearSavedPropsDisabler__Class** type_info() {
            static app::ClearSavedPropsDisabler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClearSavedPropsDisabler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClearSavedPropsDisabler__Class* get_class() {
            return il2cpp::get_class<app::ClearSavedPropsDisabler__Class>(type_info(), "", "ClearSavedPropsDisabler");
        }
        inline app::ClearSavedPropsDisabler* create() {
            return il2cpp::create_object<app::ClearSavedPropsDisabler>(get_class());
        }
    } // namespace ClearSavedPropsDisabler
} // namespace app::classes::types
