#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardIconsCollection_Icons {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiritShardIconsCollection_Icons__Class** type_info;
        inline app::SpiritShardIconsCollection_Icons__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardIconsCollection_Icons__Class>(type_info, "", "SpiritShardIconsCollection", "Icons");
        }
        inline app::SpiritShardIconsCollection_Icons* create() {
            return il2cpp::create_object<app::SpiritShardIconsCollection_Icons>(get_class());
        }
        inline app::SpiritShardIconsCollection_Icons__Boxed* box(app::SpiritShardIconsCollection_Icons value) {
            return il2cpp::box_value<app::SpiritShardIconsCollection_Icons__Boxed>(get_class(), value);
        }
        inline app::SpiritShardIconsCollection_Icons__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritShardIconsCollection_Icons__Array>(get_class(), size);
        }
        inline app::SpiritShardIconsCollection_Icons__Array* create_array(const std::vector<app::SpiritShardIconsCollection_Icons__Boxed>& items) {
            return il2cpp::array_new<app::SpiritShardIconsCollection_Icons__Array>(get_class(), items);
        }
    } // namespace SpiritShardIconsCollection_Icons
} // namespace app::classes::types
