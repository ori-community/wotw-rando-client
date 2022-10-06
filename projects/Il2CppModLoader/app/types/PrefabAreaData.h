#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrefabAreaData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PrefabAreaData__Class** type_info;
        inline app::PrefabAreaData__Class* get_class() {
            return il2cpp::get_class<app::PrefabAreaData__Class>(type_info, "", "PrefabAreaData");
        }
        inline app::PrefabAreaData* create() {
            return il2cpp::create_object<app::PrefabAreaData>(get_class());
        }
        inline app::PrefabAreaData__Array* create_array(int size) {
            return il2cpp::array_new<app::PrefabAreaData__Array>(get_class(), size);
        }
        inline app::PrefabAreaData__Array* create_array(const std::vector<app::PrefabAreaData*>& items) {
            return il2cpp::array_new<app::PrefabAreaData__Array>(get_class(), items);
        }
    } // namespace PrefabAreaData
} // namespace app::classes::types
