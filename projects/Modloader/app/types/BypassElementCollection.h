#pragma once
#include <Modloader/app/structs/BypassElementCollection.h>
#include <Modloader/app/structs/BypassElementCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BypassElementCollection {
        inline app::BypassElementCollection__Class** type_info() {
            static app::BypassElementCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BypassElementCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BypassElementCollection__Class* get_class() {
            return il2cpp::get_class<app::BypassElementCollection__Class>(type_info(), "System.Net.Configuration", "BypassElementCollection");
        }
        inline app::BypassElementCollection* create() {
            return il2cpp::create_object<app::BypassElementCollection>(get_class());
        }
    } // namespace BypassElementCollection
} // namespace app::classes::types
