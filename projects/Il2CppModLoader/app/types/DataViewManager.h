#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataViewManager {
        inline app::DataViewManager__Class** type_info = (app::DataViewManager__Class**)(modloader::win::memory::resolve_rva(0x0473CDC0));
        inline app::DataViewManager__Class* get_class() {
            return il2cpp::get_class<app::DataViewManager__Class>(type_info, "System.Data", "DataViewManager");
        }
        inline app::DataViewManager* create() {
            return il2cpp::create_object<app::DataViewManager>(get_class());
        }
    } // namespace DataViewManager
} // namespace app::classes::types
