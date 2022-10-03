#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossAppDomainData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CrossAppDomainData__Class** type_info;
        inline app::CrossAppDomainData__Class* get_class() {
            return il2cpp::get_class<app::CrossAppDomainData__Class>(type_info, "System.Runtime.Remoting.Channels", "CrossAppDomainData");
        }
        inline app::CrossAppDomainData* create() {
            return il2cpp::create_object<app::CrossAppDomainData>(get_class());
        }
    } // namespace CrossAppDomainData
} // namespace app::classes::types
