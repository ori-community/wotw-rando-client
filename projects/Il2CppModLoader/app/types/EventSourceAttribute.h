#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventSourceAttribute {
        inline app::EventSourceAttribute__Class** type_info = (app::EventSourceAttribute__Class**)(modloader::win::memory::resolve_rva(0x04757C18));
        inline app::EventSourceAttribute__Class* get_class() {
            return il2cpp::get_class<app::EventSourceAttribute__Class>(type_info, "System.Diagnostics.Tracing", "EventSourceAttribute");
        }
        inline app::EventSourceAttribute* create() {
            return il2cpp::create_object<app::EventSourceAttribute>(get_class());
        }
    } // namespace EventSourceAttribute
} // namespace app::classes::types
