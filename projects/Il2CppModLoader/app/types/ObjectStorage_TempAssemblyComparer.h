#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectStorage_TempAssemblyComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectStorage_TempAssemblyComparer__Class** type_info;
        inline app::ObjectStorage_TempAssemblyComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::ObjectStorage_TempAssemblyComparer__Class>(type_info, "System.Data.Common", "ObjectStorage", "TempAssemblyComparer");
        }
        inline app::ObjectStorage_TempAssemblyComparer* create() {
            return il2cpp::create_object<app::ObjectStorage_TempAssemblyComparer>(get_class());
        }
    } // namespace ObjectStorage_TempAssemblyComparer
} // namespace app::classes::types
