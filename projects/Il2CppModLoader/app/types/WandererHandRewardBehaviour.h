#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WandererHandRewardBehaviour {
        namespace {
            app::WandererHandRewardBehaviour__Class* type_info_ref = nullptr;
        }
        app::WandererHandRewardBehaviour__Class** type_info = &type_info_ref;
        inline app::WandererHandRewardBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererHandRewardBehaviour__Class>(type_info, "Moon", "WandererHandRewardBehaviour");
        }
        inline app::WandererHandRewardBehaviour* create() {
            return il2cpp::create_object<app::WandererHandRewardBehaviour>(get_class());
        }
    } // namespace WandererHandRewardBehaviour
} // namespace app::classes::types
