#pragma once
#include <Modloader/app/structs/TentacleAnimationPostprocess.h>
#include <Modloader/app/structs/TentacleAnimationPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleAnimationPostprocess {
        inline app::TentacleAnimationPostprocess__Class** type_info() {
            static app::TentacleAnimationPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TentacleAnimationPostprocess__Class**)(modloader::win::memory::resolve_rva(0x04743A38));
            }
            return cache;
        }
        inline app::TentacleAnimationPostprocess__Class* get_class() {
            return il2cpp::get_class<app::TentacleAnimationPostprocess__Class>(type_info(), "Moon", "TentacleAnimationPostprocess");
        }
        inline app::TentacleAnimationPostprocess* create() {
            return il2cpp::create_object<app::TentacleAnimationPostprocess>(get_class());
        }
    } // namespace TentacleAnimationPostprocess
} // namespace app::classes::types
