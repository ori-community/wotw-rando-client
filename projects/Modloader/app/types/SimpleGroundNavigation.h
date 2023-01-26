#pragma once
#include <Modloader/app/structs/SimpleGroundNavigation.h>
#include <Modloader/app/structs/SimpleGroundNavigation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleGroundNavigation {
        inline app::SimpleGroundNavigation__Class** type_info() {
            static app::SimpleGroundNavigation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleGroundNavigation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleGroundNavigation__Class* get_class() {
            return il2cpp::get_class<app::SimpleGroundNavigation__Class>(type_info(), "Moon", "SimpleGroundNavigation");
        }
        inline app::SimpleGroundNavigation* create() {
            return il2cpp::create_object<app::SimpleGroundNavigation>(get_class());
        }
    } // namespace SimpleGroundNavigation
} // namespace app::classes::types
