#pragma once
#include <Modloader/app/structs/CategoryAttribute_2.h>
#include <Modloader/app/structs/CategoryAttribute_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CategoryAttribute_2 {
        inline app::CategoryAttribute_2__Class** type_info() {
            static app::CategoryAttribute_2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CategoryAttribute_2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CategoryAttribute_2__Class* get_class() {
            return il2cpp::get_class<app::CategoryAttribute_2__Class>(type_info(), "", "CategoryAttribute");
        }
        inline app::CategoryAttribute_2* create() {
            return il2cpp::create_object<app::CategoryAttribute_2>(get_class());
        }
    } // namespace CategoryAttribute_2
} // namespace app::classes::types
