#pragma once
#include <Modloader/app/structs/WellKnownClientTypeEntry.h>
#include <Modloader/app/structs/WellKnownClientTypeEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WellKnownClientTypeEntry {
        inline app::WellKnownClientTypeEntry__Class** type_info() {
            static app::WellKnownClientTypeEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WellKnownClientTypeEntry__Class**)(modloader::win::memory::resolve_rva(0x04733CD0));
            }
            return cache;
        }
        inline app::WellKnownClientTypeEntry__Class* get_class() {
            return il2cpp::get_class<app::WellKnownClientTypeEntry__Class>(type_info(), "System.Runtime.Remoting", "WellKnownClientTypeEntry");
        }
        inline app::WellKnownClientTypeEntry* create() {
            return il2cpp::create_object<app::WellKnownClientTypeEntry>(get_class());
        }
    } // namespace WellKnownClientTypeEntry
} // namespace app::classes::types
