#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultProxySectionInternal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultProxySectionInternal__Class** type_info;
        inline app::DefaultProxySectionInternal__Class* get_class() {
            return il2cpp::get_class<app::DefaultProxySectionInternal__Class>(type_info, "System.Net.Configuration", "DefaultProxySectionInternal");
        }
        inline app::DefaultProxySectionInternal* create() {
            return il2cpp::create_object<app::DefaultProxySectionInternal>(get_class());
        }
    } // namespace DefaultProxySectionInternal
} // namespace app::classes::types
