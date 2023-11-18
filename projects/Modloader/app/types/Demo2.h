#pragma once
#include <Modloader/app/structs/Demo2.h>
#include <Modloader/app/structs/Demo2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Demo2 {
        inline app::Demo2__Class** type_info() {
            static app::Demo2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Demo2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Demo2__Class* get_class() {
            return il2cpp::get_class<app::Demo2__Class>(type_info(), "BeautifyEffect", "Demo2");
        }
        inline app::Demo2* create() {
            return il2cpp::create_object<app::Demo2>(get_class());
        }
    } // namespace Demo2
} // namespace app::classes::types
