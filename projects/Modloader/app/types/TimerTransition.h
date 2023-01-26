#pragma once
#include <Modloader/app/structs/TimerTransition.h>
#include <Modloader/app/structs/TimerTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimerTransition {
        inline app::TimerTransition__Class** type_info() {
            static app::TimerTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimerTransition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimerTransition__Class* get_class() {
            return il2cpp::get_class<app::TimerTransition__Class>(type_info(), "", "TimerTransition");
        }
        inline app::TimerTransition* create() {
            return il2cpp::create_object<app::TimerTransition>(get_class());
        }
    } // namespace TimerTransition
} // namespace app::classes::types
