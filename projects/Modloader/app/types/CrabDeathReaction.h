#pragma once
#include <Modloader/app/structs/CrabDeathReaction.h>
#include <Modloader/app/structs/CrabDeathReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrabDeathReaction {
        inline app::CrabDeathReaction__Class** type_info() {
            static app::CrabDeathReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrabDeathReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrabDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::CrabDeathReaction__Class>(type_info(), "", "CrabDeathReaction");
        }
        inline app::CrabDeathReaction* create() {
            return il2cpp::create_object<app::CrabDeathReaction>(get_class());
        }
    } // namespace CrabDeathReaction
} // namespace app::classes::types
