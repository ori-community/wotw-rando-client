#pragma once
#include <Modloader/app/structs/SkeetoDeathReaction.h>
#include <Modloader/app/structs/SkeetoDeathReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoDeathReaction {
        inline app::SkeetoDeathReaction__Class** type_info() {
            static app::SkeetoDeathReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoDeathReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::SkeetoDeathReaction__Class>(type_info(), "", "SkeetoDeathReaction");
        }
        inline app::SkeetoDeathReaction* create() {
            return il2cpp::create_object<app::SkeetoDeathReaction>(get_class());
        }
    } // namespace SkeetoDeathReaction
} // namespace app::classes::types
