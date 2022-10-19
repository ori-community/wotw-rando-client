#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventCommandEventArgs {
        inline app::EventCommandEventArgs__Class** type_info = (app::EventCommandEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04754B08));
        inline app::EventCommandEventArgs__Class* get_class() {
            return il2cpp::get_class<app::EventCommandEventArgs__Class>(type_info, "System.Diagnostics.Tracing", "EventCommandEventArgs");
        }
        inline app::EventCommandEventArgs* create() {
            return il2cpp::create_object<app::EventCommandEventArgs>(get_class());
        }
    } // namespace EventCommandEventArgs
} // namespace app::classes::types
