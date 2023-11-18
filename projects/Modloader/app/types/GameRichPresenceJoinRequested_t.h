#pragma once
#include <Modloader/app/structs/GameRichPresenceJoinRequested_t.h>
#include <Modloader/app/structs/GameRichPresenceJoinRequested_t__Boxed.h>
#include <Modloader/app/structs/GameRichPresenceJoinRequested_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameRichPresenceJoinRequested_t {
        inline app::GameRichPresenceJoinRequested_t__Class** type_info() {
            static app::GameRichPresenceJoinRequested_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameRichPresenceJoinRequested_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameRichPresenceJoinRequested_t__Class* get_class() {
            return il2cpp::get_class<app::GameRichPresenceJoinRequested_t__Class>(type_info(), "Steamworks", "GameRichPresenceJoinRequested_t");
        }
        inline app::GameRichPresenceJoinRequested_t* create() {
            return il2cpp::create_object<app::GameRichPresenceJoinRequested_t>(get_class());
        }
        inline app::GameRichPresenceJoinRequested_t__Boxed* box(app::GameRichPresenceJoinRequested_t value) {
            return il2cpp::box_value<app::GameRichPresenceJoinRequested_t__Boxed>(get_class(), value);
        }
    } // namespace GameRichPresenceJoinRequested_t
} // namespace app::classes::types
