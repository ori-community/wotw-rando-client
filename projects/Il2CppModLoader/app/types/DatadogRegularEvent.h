#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DatadogRegularEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DatadogRegularEvent__Class** type_info;
        inline app::DatadogRegularEvent__Class* get_class() {
            return il2cpp::get_class<app::DatadogRegularEvent__Class>(type_info, "", "DatadogRegularEvent");
        }
        inline app::DatadogRegularEvent* create() {
            return il2cpp::create_object<app::DatadogRegularEvent>(get_class());
        }
    } // namespace DatadogRegularEvent
} // namespace app::classes::types
