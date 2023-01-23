#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MatchTargetWeightMask__Class.h>
#include <Modloader/app/structs/MatchTargetWeightMask.h>
#include <Modloader/app/structs/MatchTargetWeightMask__Boxed.h>

namespace app::classes::types {
    namespace MatchTargetWeightMask {
        namespace {
            inline app::MatchTargetWeightMask__Class* type_info_ref = nullptr;
        }
        inline app::MatchTargetWeightMask__Class** type_info = &type_info_ref;
        inline app::MatchTargetWeightMask__Class* get_class() {
            return il2cpp::get_class<app::MatchTargetWeightMask__Class>(type_info, "UnityEngine", "MatchTargetWeightMask");
        }
        inline app::MatchTargetWeightMask* create() {
            return il2cpp::create_object<app::MatchTargetWeightMask>(get_class());
        }
        inline app::MatchTargetWeightMask__Boxed* box(app::MatchTargetWeightMask value) {
            return il2cpp::box_value<app::MatchTargetWeightMask__Boxed>(get_class(), value);
        }
    } // namespace MatchTargetWeightMask
} // namespace app::classes::types
