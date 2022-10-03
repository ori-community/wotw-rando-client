#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventAttribute__Class** type_info;
        inline app::EventAttribute__Class* get_class() {
            return il2cpp::get_class<app::EventAttribute__Class>(type_info, "System.Diagnostics.Tracing", "EventAttribute");
        }
        inline app::EventAttribute* create() {
            return il2cpp::create_object<app::EventAttribute>(get_class());
        }
    } // namespace EventAttribute
} // namespace app::classes::types
