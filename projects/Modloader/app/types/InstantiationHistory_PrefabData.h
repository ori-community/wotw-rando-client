#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstantiationHistory_PrefabData {
        inline app::InstantiationHistory_PrefabData__Class** type_info = (app::InstantiationHistory_PrefabData__Class**)(modloader::win::memory::resolve_rva(0x04710C50));
        inline app::InstantiationHistory_PrefabData__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiationHistory_PrefabData__Class>(type_info, "", "InstantiationHistory", "PrefabData");
        }
        inline app::InstantiationHistory_PrefabData* create() {
            return il2cpp::create_object<app::InstantiationHistory_PrefabData>(get_class());
        }
        inline app::InstantiationHistory_PrefabData__Array* create_array(int size) {
            return il2cpp::array_new<app::InstantiationHistory_PrefabData__Array>(get_class(), size);
        }
        inline app::InstantiationHistory_PrefabData__Array* create_array(const std::vector<app::InstantiationHistory_PrefabData*>& items) {
            return il2cpp::array_new<app::InstantiationHistory_PrefabData__Array>(get_class(), items);
        }
    } // namespace InstantiationHistory_PrefabData
} // namespace app::classes::types
