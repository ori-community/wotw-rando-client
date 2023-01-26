#pragma once
#include <Modloader/app/structs/Phone.h>
#include <Modloader/app/structs/Phone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Phone {
        inline app::Phone__Class** type_info() {
            static app::Phone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Phone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Phone__Class* get_class() {
            return il2cpp::get_class<app::Phone__Class>(type_info(), "RootMotion.Demos", "Phone");
        }
        inline app::Phone* create() {
            return il2cpp::create_object<app::Phone>(get_class());
        }
    } // namespace Phone
} // namespace app::classes::types
