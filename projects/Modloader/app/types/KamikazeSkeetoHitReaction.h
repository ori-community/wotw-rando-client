#pragma once
#include <Modloader/app/structs/KamikazeSkeetoHitReaction.h>
#include <Modloader/app/structs/KamikazeSkeetoHitReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeSkeetoHitReaction {
        inline app::KamikazeSkeetoHitReaction__Class** type_info() {
            static app::KamikazeSkeetoHitReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KamikazeSkeetoHitReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KamikazeSkeetoHitReaction__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSkeetoHitReaction__Class>(type_info(), "", "KamikazeSkeetoHitReaction");
        }
        inline app::KamikazeSkeetoHitReaction* create() {
            return il2cpp::create_object<app::KamikazeSkeetoHitReaction>(get_class());
        }
    } // namespace KamikazeSkeetoHitReaction
} // namespace app::classes::types
