#pragma once
#include <Modloader/app/structs/NickDeathReaction.h>
#include <Modloader/app/structs/NickDeathReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NickDeathReaction {
        inline app::NickDeathReaction__Class** type_info() {
            static app::NickDeathReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NickDeathReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NickDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::NickDeathReaction__Class>(type_info(), "", "NickDeathReaction");
        }
        inline app::NickDeathReaction* create() {
            return il2cpp::create_object<app::NickDeathReaction>(get_class());
        }
    } // namespace NickDeathReaction
} // namespace app::classes::types
