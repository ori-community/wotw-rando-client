#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataRelationCollection {
        inline app::DataRelationCollection__Class** type_info = (app::DataRelationCollection__Class**)(modloader::win::memory::resolve_rva(0x047257E8));
        inline app::DataRelationCollection__Class* get_class() {
            return il2cpp::get_class<app::DataRelationCollection__Class>(type_info, "System.Data", "DataRelationCollection");
        }
        inline app::DataRelationCollection* create() {
            return il2cpp::create_object<app::DataRelationCollection>(get_class());
        }
    } // namespace DataRelationCollection
} // namespace app::classes::types
