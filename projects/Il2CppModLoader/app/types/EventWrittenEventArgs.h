#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventWrittenEventArgs {
        inline app::EventWrittenEventArgs__Class** type_info = (app::EventWrittenEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04730468));
        inline app::EventWrittenEventArgs__Class* get_class() {
            return il2cpp::get_class<app::EventWrittenEventArgs__Class>(type_info, "System.Diagnostics.Tracing", "EventWrittenEventArgs");
        }
        inline app::EventWrittenEventArgs* create() {
            return il2cpp::create_object<app::EventWrittenEventArgs>(get_class());
        }
    } // namespace EventWrittenEventArgs
} // namespace app::classes::types
