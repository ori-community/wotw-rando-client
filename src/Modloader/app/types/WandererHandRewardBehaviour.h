#pragma once
#include <Modloader/app/structs/WandererHandRewardBehaviour.h>
#include <Modloader/app/structs/WandererHandRewardBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererHandRewardBehaviour {
        inline app::WandererHandRewardBehaviour__Class** type_info() {
            static app::WandererHandRewardBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WandererHandRewardBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WandererHandRewardBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererHandRewardBehaviour__Class>(type_info(), "Moon", "WandererHandRewardBehaviour");
        }
        inline app::WandererHandRewardBehaviour* create() {
            return il2cpp::create_object<app::WandererHandRewardBehaviour>(get_class());
        }
    } // namespace WandererHandRewardBehaviour
} // namespace app::classes::types
