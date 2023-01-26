#pragma once
#include <Modloader/app/structs/PlayLoopAnimationWisps_c.h>
#include <Modloader/app/structs/PlayLoopAnimationWisps_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayLoopAnimationWisps_c {
        inline app::PlayLoopAnimationWisps_c__Class** type_info() {
            static app::PlayLoopAnimationWisps_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayLoopAnimationWisps_c__Class**)(modloader::win::memory::resolve_rva(0x047261B0));
            }
            return cache;
        }
        inline app::PlayLoopAnimationWisps_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayLoopAnimationWisps_c__Class>(type_info(), "", "PlayLoopAnimationWisps", "<>c");
        }
        inline app::PlayLoopAnimationWisps_c* create() {
            return il2cpp::create_object<app::PlayLoopAnimationWisps_c>(get_class());
        }
    } // namespace PlayLoopAnimationWisps_c
} // namespace app::classes::types
