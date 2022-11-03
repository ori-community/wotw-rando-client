#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WellKnownClientTypeEntry {
        inline app::WellKnownClientTypeEntry__Class** type_info = (app::WellKnownClientTypeEntry__Class**)(modloader::win::memory::resolve_rva(0x04733CD0));
        inline app::WellKnownClientTypeEntry__Class* get_class() {
            return il2cpp::get_class<app::WellKnownClientTypeEntry__Class>(type_info, "System.Runtime.Remoting", "WellKnownClientTypeEntry");
        }
        inline app::WellKnownClientTypeEntry* create() {
            return il2cpp::create_object<app::WellKnownClientTypeEntry>(get_class());
        }
    } // namespace WellKnownClientTypeEntry
} // namespace app::classes::types
