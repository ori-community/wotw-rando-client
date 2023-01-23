#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WellKnownServiceTypeEntry__Class.h>
#include <Modloader/app/structs/WellKnownServiceTypeEntry.h>

namespace app::classes::types {
    namespace WellKnownServiceTypeEntry {
        inline app::WellKnownServiceTypeEntry__Class** type_info = (app::WellKnownServiceTypeEntry__Class**)(modloader::win::memory::resolve_rva(0x047066D0));
        inline app::WellKnownServiceTypeEntry__Class* get_class() {
            return il2cpp::get_class<app::WellKnownServiceTypeEntry__Class>(type_info, "System.Runtime.Remoting", "WellKnownServiceTypeEntry");
        }
        inline app::WellKnownServiceTypeEntry* create() {
            return il2cpp::create_object<app::WellKnownServiceTypeEntry>(get_class());
        }
    } // namespace WellKnownServiceTypeEntry
} // namespace app::classes::types
