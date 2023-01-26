#pragma once
#include <Modloader/app/structs/InstantiationHistory_PrefabData.h>
#include <Modloader/app/structs/InstantiationHistory_PrefabData__Array.h>
#include <Modloader/app/structs/InstantiationHistory_PrefabData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiationHistory_PrefabData {
        inline app::InstantiationHistory_PrefabData__Class** type_info() {
            static app::InstantiationHistory_PrefabData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstantiationHistory_PrefabData__Class**)(modloader::win::memory::resolve_rva(0x04710C50));
            }
            return cache;
        }
        inline app::InstantiationHistory_PrefabData__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiationHistory_PrefabData__Class>(type_info(), "", "InstantiationHistory", "PrefabData");
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
