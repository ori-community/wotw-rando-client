#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnalyticsBridge {
        inline app::AnalyticsBridge__Class** type_info = (app::AnalyticsBridge__Class**)(modloader::win::memory::resolve_rva(0x04790678));
        inline app::AnalyticsBridge__Class* get_class() {
            return il2cpp::get_class<app::AnalyticsBridge__Class>(type_info, "", "AnalyticsBridge");
        }
        inline app::AnalyticsBridge* create() {
            return il2cpp::create_object<app::AnalyticsBridge>(get_class());
        }
    } // namespace AnalyticsBridge
} // namespace app::classes::types
