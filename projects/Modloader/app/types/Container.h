#pragma once
#include <Modloader/app/structs/Container.h>
#include <Modloader/app/structs/Container__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Container {
        inline app::Container__Class** type_info() {
            static app::Container__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Container__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Container__Class* get_class() {
            return il2cpp::get_class<app::Container__Class>(type_info(), "System.ComponentModel", "Container");
        }
        inline app::Container* create() {
            return il2cpp::create_object<app::Container>(get_class());
        }
    } // namespace Container
} // namespace app::classes::types
