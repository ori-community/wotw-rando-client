#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimerStringValueProvider {
        namespace {
            inline app::TimerStringValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::TimerStringValueProvider__Class** type_info = &type_info_ref;
        inline app::TimerStringValueProvider__Class* get_class() {
            return il2cpp::get_class<app::TimerStringValueProvider__Class>(type_info, "", "TimerStringValueProvider");
        }
        inline app::TimerStringValueProvider* create() {
            return il2cpp::create_object<app::TimerStringValueProvider>(get_class());
        }
    } // namespace TimerStringValueProvider
} // namespace app::classes::types
