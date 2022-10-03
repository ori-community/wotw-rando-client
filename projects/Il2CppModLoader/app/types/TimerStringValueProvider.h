#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimerStringValueProvider {
        namespace {
            app::TimerStringValueProvider__Class* type_info_ref = nullptr;
        }
        app::TimerStringValueProvider__Class** type_info = &type_info_ref;
        inline app::TimerStringValueProvider__Class* get_class() {
            return il2cpp::get_class<app::TimerStringValueProvider__Class>(type_info, "", "TimerStringValueProvider");
        }
        inline app::TimerStringValueProvider* create() {
            return il2cpp::create_object<app::TimerStringValueProvider>(get_class());
        }
    } // namespace TimerStringValueProvider
} // namespace app::classes::types
