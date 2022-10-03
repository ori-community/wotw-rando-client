#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CDSCollectionETWBCLProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CDSCollectionETWBCLProvider__Class** type_info;
        inline app::CDSCollectionETWBCLProvider__Class* get_class() {
            return il2cpp::get_class<app::CDSCollectionETWBCLProvider__Class>(type_info, "System.Collections.Concurrent", "CDSCollectionETWBCLProvider");
        }
        inline app::CDSCollectionETWBCLProvider* create() {
            return il2cpp::create_object<app::CDSCollectionETWBCLProvider>(get_class());
        }
    } // namespace CDSCollectionETWBCLProvider
} // namespace app::classes::types
