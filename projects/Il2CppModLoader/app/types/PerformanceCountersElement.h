#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PerformanceCountersElement {
        namespace {
            inline app::PerformanceCountersElement__Class* type_info_ref = nullptr;
        }
        inline app::PerformanceCountersElement__Class** type_info = &type_info_ref;
        inline app::PerformanceCountersElement__Class* get_class() {
            return il2cpp::get_class<app::PerformanceCountersElement__Class>(type_info, "System.Net.Configuration", "PerformanceCountersElement");
        }
        inline app::PerformanceCountersElement* create() {
            return il2cpp::create_object<app::PerformanceCountersElement>(get_class());
        }
    } // namespace PerformanceCountersElement
} // namespace app::classes::types
