#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpikeSlugLocomotionMoveTimelineBehaviour {
        namespace {
            inline app::SpikeSlugLocomotionMoveTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpikeSlugLocomotionMoveTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::SpikeSlugLocomotionMoveTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugLocomotionMoveTimelineBehaviour__Class>(type_info, "", "SpikeSlugLocomotionMoveTimelineBehaviour");
        }
        inline app::SpikeSlugLocomotionMoveTimelineBehaviour* create() {
            return il2cpp::create_object<app::SpikeSlugLocomotionMoveTimelineBehaviour>(get_class());
        }
    } // namespace SpikeSlugLocomotionMoveTimelineBehaviour
} // namespace app::classes::types
