#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameRichPresenceJoinRequested_t {
        namespace {
            inline app::GameRichPresenceJoinRequested_t__Class* type_info_ref = nullptr;
        }
        inline app::GameRichPresenceJoinRequested_t__Class** type_info = &type_info_ref;
        inline app::GameRichPresenceJoinRequested_t__Class* get_class() {
            return il2cpp::get_class<app::GameRichPresenceJoinRequested_t__Class>(type_info, "Steamworks", "GameRichPresenceJoinRequested_t");
        }
        inline app::GameRichPresenceJoinRequested_t* create() {
            return il2cpp::create_object<app::GameRichPresenceJoinRequested_t>(get_class());
        }
        inline app::GameRichPresenceJoinRequested_t__Boxed* box(app::GameRichPresenceJoinRequested_t value) {
            return il2cpp::box_value<app::GameRichPresenceJoinRequested_t__Boxed>(get_class(), value);
        }
    } // namespace GameRichPresenceJoinRequested_t
} // namespace app::classes::types
