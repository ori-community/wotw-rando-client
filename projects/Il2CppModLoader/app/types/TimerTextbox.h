#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimerTextbox {
        namespace {
            app::TimerTextbox__Class* type_info_ref = nullptr;
        }
        app::TimerTextbox__Class** type_info = &type_info_ref;
        inline app::TimerTextbox__Class* get_class() {
            return il2cpp::get_class<app::TimerTextbox__Class>(type_info, "", "TimerTextbox");
        }
        inline app::TimerTextbox* create() {
            return il2cpp::create_object<app::TimerTextbox>(get_class());
        }
    } // namespace TimerTextbox
} // namespace app::classes::types
