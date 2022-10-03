#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardUIStarRow {
        namespace {
            app::SpiritShardUIStarRow__Class* type_info_ref = nullptr;
        }
        app::SpiritShardUIStarRow__Class** type_info = &type_info_ref;
        inline app::SpiritShardUIStarRow__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardUIStarRow__Class>(type_info, "", "SpiritShardUIStarRow");
        }
        inline app::SpiritShardUIStarRow* create() {
            return il2cpp::create_object<app::SpiritShardUIStarRow>(get_class());
        }
    } // namespace SpiritShardUIStarRow
} // namespace app::classes::types
