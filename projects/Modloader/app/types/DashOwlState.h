#pragma once
#include <Modloader/app/structs/DashOwlState.h>
#include <Modloader/app/structs/DashOwlState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashOwlState {
        inline app::DashOwlState__Class** type_info() {
            static app::DashOwlState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DashOwlState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DashOwlState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlState__Class>(type_info(), "", "DashOwlState");
        }
        inline app::DashOwlState* create() {
            return il2cpp::create_object<app::DashOwlState>(get_class());
        }
    } // namespace DashOwlState
} // namespace app::classes::types
