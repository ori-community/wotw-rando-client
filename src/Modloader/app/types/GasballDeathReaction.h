#pragma once
#include <Modloader/app/structs/GasballDeathReaction.h>
#include <Modloader/app/structs/GasballDeathReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasballDeathReaction {
        inline app::GasballDeathReaction__Class** type_info() {
            static app::GasballDeathReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GasballDeathReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GasballDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::GasballDeathReaction__Class>(type_info(), "", "GasballDeathReaction");
        }
        inline app::GasballDeathReaction* create() {
            return il2cpp::create_object<app::GasballDeathReaction>(get_class());
        }
    } // namespace GasballDeathReaction
} // namespace app::classes::types
