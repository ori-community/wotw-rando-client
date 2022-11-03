#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimerExample {
        namespace {
            inline app::TimerExample__Class* type_info_ref = nullptr;
        }
        inline app::TimerExample__Class** type_info = &type_info_ref;
        inline app::TimerExample__Class* get_class() {
            return il2cpp::get_class<app::TimerExample__Class>(type_info, "CatlikeCoding.TextBox.Examples", "TimerExample");
        }
        inline app::TimerExample* create() {
            return il2cpp::create_object<app::TimerExample>(get_class());
        }
    } // namespace TimerExample
} // namespace app::classes::types
