#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlBossDeathReactionBehaviour__Class.h>
#include <Modloader/app/structs/PetrifiedOwlBossDeathReactionBehaviour.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossDeathReactionBehaviour {
        namespace {
            inline app::PetrifiedOwlBossDeathReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossDeathReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossDeathReactionBehaviour__Class>(type_info, "", "PetrifiedOwlBossDeathReactionBehaviour");
        }
        inline app::PetrifiedOwlBossDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossDeathReactionBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossDeathReactionBehaviour
} // namespace app::classes::types
