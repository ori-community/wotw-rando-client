#pragma once
#include <Modloader/app/structs/NestedContainer_Site.h>
#include <Modloader/app/structs/NestedContainer_Site__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NestedContainer_Site {
        inline app::NestedContainer_Site__Class** type_info() {
            static app::NestedContainer_Site__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NestedContainer_Site__Class**)(modloader::win::memory::resolve_rva(0x047090D0));
            }
            return cache;
        }
        inline app::NestedContainer_Site__Class* get_class() {
            return il2cpp::get_nested_class<app::NestedContainer_Site__Class>(type_info(), "System.ComponentModel", "NestedContainer", "Site");
        }
        inline app::NestedContainer_Site* create() {
            return il2cpp::create_object<app::NestedContainer_Site>(get_class());
        }
    } // namespace NestedContainer_Site
} // namespace app::classes::types
