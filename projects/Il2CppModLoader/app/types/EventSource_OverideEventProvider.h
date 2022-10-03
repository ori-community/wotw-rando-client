#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventSource_OverideEventProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventSource_OverideEventProvider__Class** type_info;
        inline app::EventSource_OverideEventProvider__Class* get_class() {
            return il2cpp::get_nested_class<app::EventSource_OverideEventProvider__Class>(type_info, "System.Diagnostics.Tracing", "EventSource", "OverideEventProvider");
        }
        inline app::EventSource_OverideEventProvider* create() {
            return il2cpp::create_object<app::EventSource_OverideEventProvider>(get_class());
        }
    } // namespace EventSource_OverideEventProvider
} // namespace app::classes::types
