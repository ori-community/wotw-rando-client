#pragma once
#include <Modloader/app/structs/TimerExample.h>
#include <Modloader/app/structs/TimerExample__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimerExample {
        inline app::TimerExample__Class** type_info() {
            static app::TimerExample__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimerExample__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimerExample__Class* get_class() {
            return il2cpp::get_class<app::TimerExample__Class>(type_info(), "CatlikeCoding.TextBox.Examples", "TimerExample");
        }
        inline app::TimerExample* create() {
            return il2cpp::create_object<app::TimerExample>(get_class());
        }
    } // namespace TimerExample
} // namespace app::classes::types
