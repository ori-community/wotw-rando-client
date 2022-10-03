#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BabyWormWater {
        namespace {
            app::BabyWormWater__Class* type_info_ref = nullptr;
        }
        app::BabyWormWater__Class** type_info = &type_info_ref;
        inline app::BabyWormWater__Class* get_class() {
            return il2cpp::get_class<app::BabyWormWater__Class>(type_info, "", "BabyWormWater");
        }
        inline app::BabyWormWater* create() {
            return il2cpp::create_object<app::BabyWormWater>(get_class());
        }
    } // namespace BabyWormWater
} // namespace app::classes::types
