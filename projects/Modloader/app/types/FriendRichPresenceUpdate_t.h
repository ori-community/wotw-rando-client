#pragma once
#include <Modloader/app/structs/FriendRichPresenceUpdate_t.h>
#include <Modloader/app/structs/FriendRichPresenceUpdate_t__Boxed.h>
#include <Modloader/app/structs/FriendRichPresenceUpdate_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FriendRichPresenceUpdate_t {
        inline app::FriendRichPresenceUpdate_t__Class** type_info() {
            static app::FriendRichPresenceUpdate_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FriendRichPresenceUpdate_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FriendRichPresenceUpdate_t__Class* get_class() {
            return il2cpp::get_class<app::FriendRichPresenceUpdate_t__Class>(type_info(), "Steamworks", "FriendRichPresenceUpdate_t");
        }
        inline app::FriendRichPresenceUpdate_t* create() {
            return il2cpp::create_object<app::FriendRichPresenceUpdate_t>(get_class());
        }
        inline app::FriendRichPresenceUpdate_t__Boxed* box(app::FriendRichPresenceUpdate_t value) {
            return il2cpp::box_value<app::FriendRichPresenceUpdate_t__Boxed>(get_class(), value);
        }
    } // namespace FriendRichPresenceUpdate_t
} // namespace app::classes::types
