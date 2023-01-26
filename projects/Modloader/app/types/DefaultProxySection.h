#pragma once
#include <Modloader/app/structs/DefaultProxySection.h>
#include <Modloader/app/structs/DefaultProxySection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultProxySection {
        inline app::DefaultProxySection__Class** type_info() {
            static app::DefaultProxySection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DefaultProxySection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DefaultProxySection__Class* get_class() {
            return il2cpp::get_class<app::DefaultProxySection__Class>(type_info(), "System.Net.Configuration", "DefaultProxySection");
        }
        inline app::DefaultProxySection* create() {
            return il2cpp::create_object<app::DefaultProxySection>(get_class());
        }
    } // namespace DefaultProxySection
} // namespace app::classes::types
