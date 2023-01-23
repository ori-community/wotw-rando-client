#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager_NavigationData__Class.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager_NavigationData.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager_NavigationData__Array.h>

namespace app::classes::types {
    namespace CleverMenuItemSelectionManager_NavigationData {
        inline app::CleverMenuItemSelectionManager_NavigationData__Class** type_info = (app::CleverMenuItemSelectionManager_NavigationData__Class**)(modloader::win::memory::resolve_rva(0x04784D28));
        inline app::CleverMenuItemSelectionManager_NavigationData__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItemSelectionManager_NavigationData__Class>(type_info, "", "CleverMenuItemSelectionManager", "NavigationData");
        }
        inline app::CleverMenuItemSelectionManager_NavigationData* create() {
            return il2cpp::create_object<app::CleverMenuItemSelectionManager_NavigationData>(get_class());
        }
        inline app::CleverMenuItemSelectionManager_NavigationData__Array* create_array(int size) {
            return il2cpp::array_new<app::CleverMenuItemSelectionManager_NavigationData__Array>(get_class(), size);
        }
        inline app::CleverMenuItemSelectionManager_NavigationData__Array* create_array(const std::vector<app::CleverMenuItemSelectionManager_NavigationData*>& items) {
            return il2cpp::array_new<app::CleverMenuItemSelectionManager_NavigationData__Array>(get_class(), items);
        }
    } // namespace CleverMenuItemSelectionManager_NavigationData
} // namespace app::classes::types
