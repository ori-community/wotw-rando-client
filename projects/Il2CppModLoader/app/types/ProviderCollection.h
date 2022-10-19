#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProviderCollection {
        namespace {
            inline app::ProviderCollection__Class* type_info_ref = nullptr;
        }
        inline app::ProviderCollection__Class** type_info = &type_info_ref;
        inline app::ProviderCollection__Class* get_class() {
            return il2cpp::get_class<app::ProviderCollection__Class>(type_info, "System.Configuration.Provider", "ProviderCollection");
        }
        inline app::ProviderCollection* create() {
            return il2cpp::create_object<app::ProviderCollection>(get_class());
        }
    } // namespace ProviderCollection
} // namespace app::classes::types
