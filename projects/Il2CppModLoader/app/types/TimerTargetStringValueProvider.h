#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimerTargetStringValueProvider {
        namespace {
            app::TimerTargetStringValueProvider__Class* type_info_ref = nullptr;
        }
        app::TimerTargetStringValueProvider__Class** type_info = &type_info_ref;
        inline app::TimerTargetStringValueProvider__Class* get_class() {
            return il2cpp::get_class<app::TimerTargetStringValueProvider__Class>(type_info, "", "TimerTargetStringValueProvider");
        }
        inline app::TimerTargetStringValueProvider* create() {
            return il2cpp::create_object<app::TimerTargetStringValueProvider>(get_class());
        }
    } // namespace TimerTargetStringValueProvider
} // namespace app::classes::types
