#pragma once
#include <Modloader/app/structs/Motion_1.h>
#include <Modloader/app/structs/Motion_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Motion_1 {
        inline app::Motion_1__Class** type_info() {
            static app::Motion_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Motion_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Motion_1__Class* get_class() {
            return il2cpp::get_class<app::Motion_1__Class>(type_info(), "Kino", "Motion");
        }
        inline app::Motion_1* create() {
            return il2cpp::create_object<app::Motion_1>(get_class());
        }
    } // namespace Motion_1
} // namespace app::classes::types
