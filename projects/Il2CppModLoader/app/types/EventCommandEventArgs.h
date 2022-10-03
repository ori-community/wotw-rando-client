#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventCommandEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventCommandEventArgs__Class** type_info;
        inline app::EventCommandEventArgs__Class* get_class() {
            return il2cpp::get_class<app::EventCommandEventArgs__Class>(type_info, "System.Diagnostics.Tracing", "EventCommandEventArgs");
        }
        inline app::EventCommandEventArgs* create() {
            return il2cpp::create_object<app::EventCommandEventArgs>(get_class());
        }
    } // namespace EventCommandEventArgs
} // namespace app::classes::types
