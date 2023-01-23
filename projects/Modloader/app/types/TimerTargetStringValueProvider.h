#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimerTargetStringValueProvider__Class.h>
#include <Modloader/app/structs/TimerTargetStringValueProvider.h>

namespace app::classes::types {
    namespace TimerTargetStringValueProvider {
        namespace {
            inline app::TimerTargetStringValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::TimerTargetStringValueProvider__Class** type_info = &type_info_ref;
        inline app::TimerTargetStringValueProvider__Class* get_class() {
            return il2cpp::get_class<app::TimerTargetStringValueProvider__Class>(type_info, "", "TimerTargetStringValueProvider");
        }
        inline app::TimerTargetStringValueProvider* create() {
            return il2cpp::create_object<app::TimerTargetStringValueProvider>(get_class());
        }
    } // namespace TimerTargetStringValueProvider
} // namespace app::classes::types
