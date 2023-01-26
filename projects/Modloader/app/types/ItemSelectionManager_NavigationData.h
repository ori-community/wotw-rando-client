#pragma once
#include <Modloader/app/structs/ItemSelectionManager_NavigationData.h>
#include <Modloader/app/structs/ItemSelectionManager_NavigationData__Array.h>
#include <Modloader/app/structs/ItemSelectionManager_NavigationData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ItemSelectionManager_NavigationData {
        inline app::ItemSelectionManager_NavigationData__Class** type_info() {
            static app::ItemSelectionManager_NavigationData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ItemSelectionManager_NavigationData__Class**)(modloader::win::memory::resolve_rva(0x04738F18));
            }
            return cache;
        }
        inline app::ItemSelectionManager_NavigationData__Class* get_class() {
            return il2cpp::get_nested_class<app::ItemSelectionManager_NavigationData__Class>(type_info(), "Moon.UI", "ItemSelectionManager", "NavigationData");
        }
        inline app::ItemSelectionManager_NavigationData* create() {
            return il2cpp::create_object<app::ItemSelectionManager_NavigationData>(get_class());
        }
        inline app::ItemSelectionManager_NavigationData__Array* create_array(int size) {
            return il2cpp::array_new<app::ItemSelectionManager_NavigationData__Array>(get_class(), size);
        }
        inline app::ItemSelectionManager_NavigationData__Array* create_array(const std::vector<app::ItemSelectionManager_NavigationData*>& items) {
            return il2cpp::array_new<app::ItemSelectionManager_NavigationData__Array>(get_class(), items);
        }
    } // namespace ItemSelectionManager_NavigationData
} // namespace app::classes::types
