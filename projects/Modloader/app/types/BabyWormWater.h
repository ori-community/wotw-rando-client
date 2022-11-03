#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BabyWormWater {
        namespace {
            inline app::BabyWormWater__Class* type_info_ref = nullptr;
        }
        inline app::BabyWormWater__Class** type_info = &type_info_ref;
        inline app::BabyWormWater__Class* get_class() {
            return il2cpp::get_class<app::BabyWormWater__Class>(type_info, "", "BabyWormWater");
        }
        inline app::BabyWormWater* create() {
            return il2cpp::create_object<app::BabyWormWater>(get_class());
        }
    } // namespace BabyWormWater
} // namespace app::classes::types
