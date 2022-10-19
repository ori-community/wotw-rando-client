#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventProvider {
        inline app::EventProvider__Class** type_info = (app::EventProvider__Class**)(modloader::win::memory::resolve_rva(0x047516B8));
        inline app::EventProvider__Class* get_class() {
            return il2cpp::get_class<app::EventProvider__Class>(type_info, "System.Diagnostics.Tracing", "EventProvider");
        }
        inline app::EventProvider* create() {
            return il2cpp::create_object<app::EventProvider>(get_class());
        }
    } // namespace EventProvider
} // namespace app::classes::types
