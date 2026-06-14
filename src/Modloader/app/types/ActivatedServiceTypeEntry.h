#pragma once
#include <Modloader/app/structs/ActivatedServiceTypeEntry.h>
#include <Modloader/app/structs/ActivatedServiceTypeEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivatedServiceTypeEntry {
        inline app::ActivatedServiceTypeEntry__Class** type_info() {
            static app::ActivatedServiceTypeEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActivatedServiceTypeEntry__Class**)(modloader::win::memory::resolve_rva(0x047740F0));
            }
            return cache;
        }
        inline app::ActivatedServiceTypeEntry__Class* get_class() {
            return il2cpp::get_class<app::ActivatedServiceTypeEntry__Class>(type_info(), "System.Runtime.Remoting", "ActivatedServiceTypeEntry");
        }
        inline app::ActivatedServiceTypeEntry* create() {
            return il2cpp::create_object<app::ActivatedServiceTypeEntry>(get_class());
        }
    } // namespace ActivatedServiceTypeEntry
} // namespace app::classes::types
