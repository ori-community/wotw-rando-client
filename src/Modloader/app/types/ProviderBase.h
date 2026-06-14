#pragma once
#include <Modloader/app/structs/ProviderBase.h>
#include <Modloader/app/structs/ProviderBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProviderBase {
        inline app::ProviderBase__Class** type_info() {
            static app::ProviderBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProviderBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProviderBase__Class* get_class() {
            return il2cpp::get_class<app::ProviderBase__Class>(type_info(), "System.Configuration.Provider", "ProviderBase");
        }
        inline app::ProviderBase* create() {
            return il2cpp::create_object<app::ProviderBase>(get_class());
        }
    } // namespace ProviderBase
} // namespace app::classes::types
