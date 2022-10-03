#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventProvider__Class** type_info;
        inline app::EventProvider__Class* get_class() {
            return il2cpp::get_class<app::EventProvider__Class>(type_info, "System.Diagnostics.Tracing", "EventProvider");
        }
        inline app::EventProvider* create() {
            return il2cpp::create_object<app::EventProvider>(get_class());
        }
    } // namespace EventProvider
} // namespace app::classes::types
