#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Metric__Enum__Array {
        inline app::Metric__Enum__Array__Class** type_info = (app::Metric__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04764248));
        inline app::Metric__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::Metric__Enum__Array__Class>(type_info, "Moon.Profile", "Metric[]");
        }
        inline app::Metric__Enum__Array* create() {
            return il2cpp::create_object<app::Metric__Enum__Array>(get_class());
        }
    } // namespace Metric__Enum__Array
} // namespace app::classes::types
