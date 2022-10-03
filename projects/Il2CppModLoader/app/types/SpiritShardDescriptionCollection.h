#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardDescriptionCollection {
        namespace {
            app::SpiritShardDescriptionCollection__Class* type_info_ref = nullptr;
        }
        app::SpiritShardDescriptionCollection__Class** type_info = &type_info_ref;
        inline app::SpiritShardDescriptionCollection__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardDescriptionCollection__Class>(type_info, "", "SpiritShardDescriptionCollection");
        }
        inline app::SpiritShardDescriptionCollection* create() {
            return il2cpp::create_object<app::SpiritShardDescriptionCollection>(get_class());
        }
    } // namespace SpiritShardDescriptionCollection
} // namespace app::classes::types
