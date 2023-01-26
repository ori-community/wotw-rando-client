#pragma once
#include <Modloader/app/structs/FriendsGroupID_t.h>
#include <Modloader/app/structs/FriendsGroupID_t__Boxed.h>
#include <Modloader/app/structs/FriendsGroupID_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FriendsGroupID_t {
        inline app::FriendsGroupID_t__Class** type_info() {
            static app::FriendsGroupID_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FriendsGroupID_t__Class**)(modloader::win::memory::resolve_rva(0x04702990));
            }
            return cache;
        }
        inline app::FriendsGroupID_t__Class* get_class() {
            return il2cpp::get_class<app::FriendsGroupID_t__Class>(type_info(), "Steamworks", "FriendsGroupID_t");
        }
        inline app::FriendsGroupID_t* create() {
            return il2cpp::create_object<app::FriendsGroupID_t>(get_class());
        }
        inline app::FriendsGroupID_t__Boxed* box(app::FriendsGroupID_t value) {
            return il2cpp::box_value<app::FriendsGroupID_t__Boxed>(get_class(), value);
        }
    } // namespace FriendsGroupID_t
} // namespace app::classes::types
