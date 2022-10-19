#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ItemSelectionManager_NavigationData__Array {
        namespace {
            inline app::ItemSelectionManager_NavigationData__Array__Class* type_info_ref = nullptr;
        }
        inline app::ItemSelectionManager_NavigationData__Array__Class** type_info = &type_info_ref;
        inline app::ItemSelectionManager_NavigationData__Array__Class* get_class() {
            return il2cpp::get_class<app::ItemSelectionManager_NavigationData__Array__Class>(type_info, "Moon.UI", "ItemSelectionManager+NavigationData[]");
        }
        inline app::ItemSelectionManager_NavigationData__Array* create() {
            return il2cpp::create_object<app::ItemSelectionManager_NavigationData__Array>(get_class());
        }
    } // namespace ItemSelectionManager_NavigationData__Array
} // namespace app::classes::types
