#pragma once
#include <Modloader/app/structs/UserControlInteractions.h>
#include <Modloader/app/structs/UserControlInteractions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserControlInteractions {
        inline app::UserControlInteractions__Class** type_info() {
            static app::UserControlInteractions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserControlInteractions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserControlInteractions__Class* get_class() {
            return il2cpp::get_class<app::UserControlInteractions__Class>(type_info(), "RootMotion.Demos", "UserControlInteractions");
        }
        inline app::UserControlInteractions* create() {
            return il2cpp::create_object<app::UserControlInteractions>(get_class());
        }
    } // namespace UserControlInteractions
} // namespace app::classes::types
