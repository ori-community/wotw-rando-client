#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventSource {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventSource__Class** type_info;
        inline app::EventSource__Class* get_class() {
            return il2cpp::get_class<app::EventSource__Class>(type_info, "System.Diagnostics.Tracing", "EventSource");
        }
        inline app::EventSource* create() {
            return il2cpp::create_object<app::EventSource>(get_class());
        }
    } // namespace EventSource
} // namespace app::classes::types
