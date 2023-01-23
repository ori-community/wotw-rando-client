#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossHitReactionBehaviour__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossHitReactionBehaviour.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossHitReactionBehaviour {
        namespace {
            inline app::PetrifiedOwlBossHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossHitReactionBehaviour__Class>(type_info, "", "PetrifiedOwlBossHitReactionBehaviour");
        }
        inline app::PetrifiedOwlBossHitReactionBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossHitReactionBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossHitReactionBehaviour
} // namespace app::classes::types
