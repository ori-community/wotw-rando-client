#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleHitReaction {
        namespace {
            inline app::TentacleHitReaction__Class* type_info_ref = nullptr;
        }
        inline app::TentacleHitReaction__Class** type_info = &type_info_ref;
        inline app::TentacleHitReaction__Class* get_class() {
            return il2cpp::get_class<app::TentacleHitReaction__Class>(type_info, "", "TentacleHitReaction");
        }
        inline app::TentacleHitReaction* create() {
            return il2cpp::create_object<app::TentacleHitReaction>(get_class());
        }
    } // namespace TentacleHitReaction
} // namespace app::classes::types
