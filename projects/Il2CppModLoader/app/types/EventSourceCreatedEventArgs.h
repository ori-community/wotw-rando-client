#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventSourceCreatedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventSourceCreatedEventArgs__Class** type_info;
        inline app::EventSourceCreatedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::EventSourceCreatedEventArgs__Class>(type_info, "System.Diagnostics.Tracing", "EventSourceCreatedEventArgs");
        }
        inline app::EventSourceCreatedEventArgs* create() {
            return il2cpp::create_object<app::EventSourceCreatedEventArgs>(get_class());
        }
    } // namespace EventSourceCreatedEventArgs
} // namespace app::classes::types
