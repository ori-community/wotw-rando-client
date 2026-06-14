#pragma once
#include <Modloader/app/structs/TimerTargetStringValueProvider.h>
#include <Modloader/app/structs/TimerTargetStringValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimerTargetStringValueProvider {
        inline app::TimerTargetStringValueProvider__Class** type_info() {
            static app::TimerTargetStringValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimerTargetStringValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimerTargetStringValueProvider__Class* get_class() {
            return il2cpp::get_class<app::TimerTargetStringValueProvider__Class>(type_info(), "", "TimerTargetStringValueProvider");
        }
        inline app::TimerTargetStringValueProvider* create() {
            return il2cpp::create_object<app::TimerTargetStringValueProvider>(get_class());
        }
    } // namespace TimerTargetStringValueProvider
} // namespace app::classes::types
