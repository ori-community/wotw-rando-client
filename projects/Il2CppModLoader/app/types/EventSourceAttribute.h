#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventSourceAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventSourceAttribute__Class** type_info;
        inline app::EventSourceAttribute__Class* get_class() {
            return il2cpp::get_class<app::EventSourceAttribute__Class>(type_info, "System.Diagnostics.Tracing", "EventSourceAttribute");
        }
        inline app::EventSourceAttribute* create() {
            return il2cpp::create_object<app::EventSourceAttribute>(get_class());
        }
    } // namespace EventSourceAttribute
} // namespace app::classes::types
