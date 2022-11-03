#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WandererHandRewardBehaviour {
        namespace {
            inline app::WandererHandRewardBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::WandererHandRewardBehaviour__Class** type_info = &type_info_ref;
        inline app::WandererHandRewardBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererHandRewardBehaviour__Class>(type_info, "Moon", "WandererHandRewardBehaviour");
        }
        inline app::WandererHandRewardBehaviour* create() {
            return il2cpp::create_object<app::WandererHandRewardBehaviour>(get_class());
        }
    } // namespace WandererHandRewardBehaviour
} // namespace app::classes::types
