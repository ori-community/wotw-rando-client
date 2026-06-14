#pragma once
#include <Modloader/app/structs/Demo1.h>
#include <Modloader/app/structs/Demo1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Demo1 {
        inline app::Demo1__Class** type_info() {
            static app::Demo1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Demo1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Demo1__Class* get_class() {
            return il2cpp::get_class<app::Demo1__Class>(type_info(), "BeautifyEffect", "Demo1");
        }
        inline app::Demo1* create() {
            return il2cpp::create_object<app::Demo1>(get_class());
        }
    } // namespace Demo1
} // namespace app::classes::types
