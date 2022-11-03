#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimerTransition {
        namespace {
            inline app::TimerTransition__Class* type_info_ref = nullptr;
        }
        inline app::TimerTransition__Class** type_info = &type_info_ref;
        inline app::TimerTransition__Class* get_class() {
            return il2cpp::get_class<app::TimerTransition__Class>(type_info, "", "TimerTransition");
        }
        inline app::TimerTransition* create() {
            return il2cpp::create_object<app::TimerTransition>(get_class());
        }
    } // namespace TimerTransition
} // namespace app::classes::types
