#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DatadogRegularEvent {
        inline app::DatadogRegularEvent__Class** type_info = (app::DatadogRegularEvent__Class**)(modloader::win::memory::resolve_rva(0x0474C970));
        inline app::DatadogRegularEvent__Class* get_class() {
            return il2cpp::get_class<app::DatadogRegularEvent__Class>(type_info, "", "DatadogRegularEvent");
        }
        inline app::DatadogRegularEvent* create() {
            return il2cpp::create_object<app::DatadogRegularEvent>(get_class());
        }
    } // namespace DatadogRegularEvent
} // namespace app::classes::types
