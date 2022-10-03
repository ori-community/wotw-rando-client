#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardIconsCollection {
        namespace {
            app::SpiritShardIconsCollection__Class* type_info_ref = nullptr;
        }
        app::SpiritShardIconsCollection__Class** type_info = &type_info_ref;
        inline app::SpiritShardIconsCollection__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardIconsCollection__Class>(type_info, "", "SpiritShardIconsCollection");
        }
        inline app::SpiritShardIconsCollection* create() {
            return il2cpp::create_object<app::SpiritShardIconsCollection>(get_class());
        }
    } // namespace SpiritShardIconsCollection
} // namespace app::classes::types
