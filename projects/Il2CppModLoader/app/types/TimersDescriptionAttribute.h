#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimersDescriptionAttribute {
        namespace {
            inline app::TimersDescriptionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::TimersDescriptionAttribute__Class** type_info = &type_info_ref;
        inline app::TimersDescriptionAttribute__Class* get_class() {
            return il2cpp::get_class<app::TimersDescriptionAttribute__Class>(type_info, "System.Timers", "TimersDescriptionAttribute");
        }
        inline app::TimersDescriptionAttribute* create() {
            return il2cpp::create_object<app::TimersDescriptionAttribute>(get_class());
        }
    } // namespace TimersDescriptionAttribute
} // namespace app::classes::types
