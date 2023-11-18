#pragma once
#include <Modloader/app/structs/AssemblyReloadedEvent.h>
#include <Modloader/app/structs/AssemblyReloadedEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyReloadedEvent {
        inline app::AssemblyReloadedEvent__Class** type_info() {
            static app::AssemblyReloadedEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyReloadedEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyReloadedEvent__Class* get_class() {
            return il2cpp::get_class<app::AssemblyReloadedEvent__Class>(type_info(), "", "AssemblyReloadedEvent");
        }
        inline app::AssemblyReloadedEvent* create() {
            return il2cpp::create_object<app::AssemblyReloadedEvent>(get_class());
        }
    } // namespace AssemblyReloadedEvent
} // namespace app::classes::types
