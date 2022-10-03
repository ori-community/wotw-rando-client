#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProviderBase {
        namespace {
            app::ProviderBase__Class* type_info_ref = nullptr;
        }
        app::ProviderBase__Class** type_info = &type_info_ref;
        inline app::ProviderBase__Class* get_class() {
            return il2cpp::get_class<app::ProviderBase__Class>(type_info, "System.Configuration.Provider", "ProviderBase");
        }
        inline app::ProviderBase* create() {
            return il2cpp::create_object<app::ProviderBase>(get_class());
        }
    } // namespace ProviderBase
} // namespace app::classes::types
