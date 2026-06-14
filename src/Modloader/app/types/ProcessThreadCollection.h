#pragma once
#include <Modloader/app/structs/ProcessThreadCollection.h>
#include <Modloader/app/structs/ProcessThreadCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProcessThreadCollection {
        inline app::ProcessThreadCollection__Class** type_info() {
            static app::ProcessThreadCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProcessThreadCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProcessThreadCollection__Class* get_class() {
            return il2cpp::get_class<app::ProcessThreadCollection__Class>(type_info(), "System.Diagnostics", "ProcessThreadCollection");
        }
        inline app::ProcessThreadCollection* create() {
            return il2cpp::create_object<app::ProcessThreadCollection>(get_class());
        }
    } // namespace ProcessThreadCollection
} // namespace app::classes::types
