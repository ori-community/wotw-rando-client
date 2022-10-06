#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CacheData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CacheData__Class** type_info;
        inline app::CacheData__Class* get_class() {
            return il2cpp::get_class<app::CacheData__Class>(type_info, "SystemIntegration", "CacheData");
        }
        inline app::CacheData* create() {
            return il2cpp::create_object<app::CacheData>(get_class());
        }
        inline app::CacheData__Array* create_array(int size) {
            return il2cpp::array_new<app::CacheData__Array>(get_class(), size);
        }
        inline app::CacheData__Array* create_array(const std::vector<app::CacheData*>& items) {
            return il2cpp::array_new<app::CacheData__Array>(get_class(), items);
        }
    } // namespace CacheData
} // namespace app::classes::types
