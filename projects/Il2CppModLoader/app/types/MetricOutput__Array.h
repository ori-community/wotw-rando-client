#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MetricOutput__Array {
        inline app::MetricOutput__Array__Class** type_info = (app::MetricOutput__Array__Class**)(modloader::win::memory::resolve_rva(0x04788D10));
        inline app::MetricOutput__Array__Class* get_class() {
            return il2cpp::get_class<app::MetricOutput__Array__Class>(type_info, "Moon.Profile", "MetricOutput[]");
        }
        inline app::MetricOutput__Array* create() {
            return il2cpp::create_object<app::MetricOutput__Array>(get_class());
        }
    } // namespace MetricOutput__Array
} // namespace app::classes::types
