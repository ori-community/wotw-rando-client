#pragma once
#include <Modloader/app/structs/EnableDisableByPause.h>
#include <Modloader/app/structs/EnableDisableByPause__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnableDisableByPause {
        inline app::EnableDisableByPause__Class** type_info() {
            static app::EnableDisableByPause__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnableDisableByPause__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnableDisableByPause__Class* get_class() {
            return il2cpp::get_class<app::EnableDisableByPause__Class>(type_info(), "", "EnableDisableByPause");
        }
        inline app::EnableDisableByPause* create() {
            return il2cpp::create_object<app::EnableDisableByPause>(get_class());
        }
    } // namespace EnableDisableByPause
} // namespace app::classes::types
