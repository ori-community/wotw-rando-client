#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CDSCollectionETWBCLProvider {
        inline app::CDSCollectionETWBCLProvider__Class** type_info = (app::CDSCollectionETWBCLProvider__Class**)(modloader::win::memory::resolve_rva(0x0478A8D8));
        inline app::CDSCollectionETWBCLProvider__Class* get_class() {
            return il2cpp::get_class<app::CDSCollectionETWBCLProvider__Class>(type_info, "System.Collections.Concurrent", "CDSCollectionETWBCLProvider");
        }
        inline app::CDSCollectionETWBCLProvider* create() {
            return il2cpp::create_object<app::CDSCollectionETWBCLProvider>(get_class());
        }
    } // namespace CDSCollectionETWBCLProvider
} // namespace app::classes::types
