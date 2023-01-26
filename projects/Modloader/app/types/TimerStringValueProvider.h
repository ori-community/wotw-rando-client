#pragma once
#include <Modloader/app/structs/TimerStringValueProvider.h>
#include <Modloader/app/structs/TimerStringValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimerStringValueProvider {
        inline app::TimerStringValueProvider__Class** type_info() {
            static app::TimerStringValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimerStringValueProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimerStringValueProvider__Class* get_class() {
            return il2cpp::get_class<app::TimerStringValueProvider__Class>(type_info(), "", "TimerStringValueProvider");
        }
        inline app::TimerStringValueProvider* create() {
            return il2cpp::create_object<app::TimerStringValueProvider>(get_class());
        }
    } // namespace TimerStringValueProvider
} // namespace app::classes::types
