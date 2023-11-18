#pragma once
#include <Modloader/app/structs/WandererHandRewardBehaviour_c.h>
#include <Modloader/app/structs/WandererHandRewardBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererHandRewardBehaviour_c {
        inline app::WandererHandRewardBehaviour_c__Class** type_info() {
            static app::WandererHandRewardBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WandererHandRewardBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0474C7F0));
            }
            return cache;
        }
        inline app::WandererHandRewardBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WandererHandRewardBehaviour_c__Class>(type_info(), "Moon", "WandererHandRewardBehaviour", "<>c");
        }
        inline app::WandererHandRewardBehaviour_c* create() {
            return il2cpp::create_object<app::WandererHandRewardBehaviour_c>(get_class());
        }
    } // namespace WandererHandRewardBehaviour_c
} // namespace app::classes::types
