#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HitReaction_HitPoint {
        namespace {
            inline app::HitReaction_HitPoint__Class* type_info_ref = nullptr;
        }
        inline app::HitReaction_HitPoint__Class** type_info = &type_info_ref;
        inline app::HitReaction_HitPoint__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReaction_HitPoint__Class>(type_info, "RootMotion.FinalIK", "HitReaction", "HitPoint");
        }
        inline app::HitReaction_HitPoint* create() {
            return il2cpp::create_object<app::HitReaction_HitPoint>(get_class());
        }
    } // namespace HitReaction_HitPoint
} // namespace app::classes::types
