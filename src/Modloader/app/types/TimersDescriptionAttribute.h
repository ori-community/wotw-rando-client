#pragma once
#include <Modloader/app/structs/TimersDescriptionAttribute.h>
#include <Modloader/app/structs/TimersDescriptionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimersDescriptionAttribute {
        inline app::TimersDescriptionAttribute__Class** type_info() {
            static app::TimersDescriptionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimersDescriptionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimersDescriptionAttribute__Class* get_class() {
            return il2cpp::get_class<app::TimersDescriptionAttribute__Class>(type_info(), "System.Timers", "TimersDescriptionAttribute");
        }
        inline app::TimersDescriptionAttribute* create() {
            return il2cpp::create_object<app::TimersDescriptionAttribute>(get_class());
        }
    } // namespace TimersDescriptionAttribute
} // namespace app::classes::types
