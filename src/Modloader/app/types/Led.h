#pragma once
#include <Modloader/app/structs/Led.h>
#include <Modloader/app/structs/Led__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Led {
        inline app::Led__Class** type_info() {
            static app::Led__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Led__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Led__Class* get_class() {
            return il2cpp::get_class<app::Led__Class>(type_info(), "Colorful", "Led");
        }
        inline app::Led* create() {
            return il2cpp::create_object<app::Led>(get_class());
        }
    } // namespace Led
} // namespace app::classes::types
