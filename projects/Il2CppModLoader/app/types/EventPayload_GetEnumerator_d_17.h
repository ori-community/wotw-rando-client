#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventPayload_GetEnumerator_d_17 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventPayload_GetEnumerator_d_17__Class** type_info;
        inline app::EventPayload_GetEnumerator_d_17__Class* get_class() {
            return il2cpp::get_nested_class<app::EventPayload_GetEnumerator_d_17__Class>(type_info, "System.Diagnostics.Tracing", "EventPayload", "<GetEnumerator>d__17");
        }
        inline app::EventPayload_GetEnumerator_d_17* create() {
            return il2cpp::create_object<app::EventPayload_GetEnumerator_d_17>(get_class());
        }
    } // namespace EventPayload_GetEnumerator_d_17
} // namespace app::classes::types
