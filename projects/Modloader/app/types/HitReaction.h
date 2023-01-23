#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HitReaction__Class.h>
#include <Modloader/app/structs/HitReaction.h>

namespace app::classes::types {
    namespace HitReaction {
        namespace {
            inline app::HitReaction__Class* type_info_ref = nullptr;
        }
        inline app::HitReaction__Class** type_info = &type_info_ref;
        inline app::HitReaction__Class* get_class() {
            return il2cpp::get_class<app::HitReaction__Class>(type_info, "RootMotion.FinalIK", "HitReaction");
        }
        inline app::HitReaction* create() {
            return il2cpp::create_object<app::HitReaction>(get_class());
        }
    } // namespace HitReaction
} // namespace app::classes::types
