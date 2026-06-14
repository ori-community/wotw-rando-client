#pragma once
#include <Modloader/app/structs/Container_Site.h>
#include <Modloader/app/structs/Container_Site__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Container_Site {
        inline app::Container_Site__Class** type_info() {
            static app::Container_Site__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Container_Site__Class**)(modloader::win::memory::resolve_rva(0x04768300));
            }
            return cache;
        }
        inline app::Container_Site__Class* get_class() {
            return il2cpp::get_nested_class<app::Container_Site__Class>(type_info(), "System.ComponentModel", "Container", "Site");
        }
        inline app::Container_Site* create() {
            return il2cpp::create_object<app::Container_Site>(get_class());
        }
    } // namespace Container_Site
} // namespace app::classes::types
