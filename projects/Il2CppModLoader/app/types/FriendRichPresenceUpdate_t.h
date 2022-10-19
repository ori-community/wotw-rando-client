#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FriendRichPresenceUpdate_t {
        namespace {
            inline app::FriendRichPresenceUpdate_t__Class* type_info_ref = nullptr;
        }
        inline app::FriendRichPresenceUpdate_t__Class** type_info = &type_info_ref;
        inline app::FriendRichPresenceUpdate_t__Class* get_class() {
            return il2cpp::get_class<app::FriendRichPresenceUpdate_t__Class>(type_info, "Steamworks", "FriendRichPresenceUpdate_t");
        }
        inline app::FriendRichPresenceUpdate_t* create() {
            return il2cpp::create_object<app::FriendRichPresenceUpdate_t>(get_class());
        }
        inline app::FriendRichPresenceUpdate_t__Boxed* box(app::FriendRichPresenceUpdate_t value) {
            return il2cpp::box_value<app::FriendRichPresenceUpdate_t__Boxed>(get_class(), value);
        }
    } // namespace FriendRichPresenceUpdate_t
} // namespace app::classes::types
