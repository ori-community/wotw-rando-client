#pragma once
#include <Modloader/app/structs/ProviderCollection.h>
#include <Modloader/app/structs/ProviderCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProviderCollection {
        inline app::ProviderCollection__Class** type_info() {
            static app::ProviderCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProviderCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProviderCollection__Class* get_class() {
            return il2cpp::get_class<app::ProviderCollection__Class>(type_info(), "System.Configuration.Provider", "ProviderCollection");
        }
        inline app::ProviderCollection* create() {
            return il2cpp::create_object<app::ProviderCollection>(get_class());
        }
    } // namespace ProviderCollection
} // namespace app::classes::types
