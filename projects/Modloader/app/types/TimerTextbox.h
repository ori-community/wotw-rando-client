#pragma once
#include <Modloader/app/structs/TimerTextbox.h>
#include <Modloader/app/structs/TimerTextbox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimerTextbox {
        inline app::TimerTextbox__Class** type_info() {
            static app::TimerTextbox__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimerTextbox__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimerTextbox__Class* get_class() {
            return il2cpp::get_class<app::TimerTextbox__Class>(type_info(), "", "TimerTextbox");
        }
        inline app::TimerTextbox* create() {
            return il2cpp::create_object<app::TimerTextbox>(get_class());
        }
    } // namespace TimerTextbox
} // namespace app::classes::types
