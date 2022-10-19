#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventSource_OverideEventProvider {
        inline app::EventSource_OverideEventProvider__Class** type_info = (app::EventSource_OverideEventProvider__Class**)(modloader::win::memory::resolve_rva(0x04713E70));
        inline app::EventSource_OverideEventProvider__Class* get_class() {
            return il2cpp::get_nested_class<app::EventSource_OverideEventProvider__Class>(type_info, "System.Diagnostics.Tracing", "EventSource", "OverideEventProvider");
        }
        inline app::EventSource_OverideEventProvider* create() {
            return il2cpp::create_object<app::EventSource_OverideEventProvider>(get_class());
        }
    } // namespace EventSource_OverideEventProvider
} // namespace app::classes::types
