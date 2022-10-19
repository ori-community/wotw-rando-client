#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ObjectStorage_TempAssemblyComparer {
        inline app::ObjectStorage_TempAssemblyComparer__Class** type_info = (app::ObjectStorage_TempAssemblyComparer__Class**)(modloader::win::memory::resolve_rva(0x0476D9C0));
        inline app::ObjectStorage_TempAssemblyComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::ObjectStorage_TempAssemblyComparer__Class>(type_info, "System.Data.Common", "ObjectStorage", "TempAssemblyComparer");
        }
        inline app::ObjectStorage_TempAssemblyComparer* create() {
            return il2cpp::create_object<app::ObjectStorage_TempAssemblyComparer>(get_class());
        }
    } // namespace ObjectStorage_TempAssemblyComparer
} // namespace app::classes::types
