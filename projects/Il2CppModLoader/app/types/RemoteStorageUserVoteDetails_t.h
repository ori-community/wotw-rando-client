#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageUserVoteDetails_t {
        namespace {
            app::RemoteStorageUserVoteDetails_t__Class* type_info_ref = nullptr;
        }
        app::RemoteStorageUserVoteDetails_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageUserVoteDetails_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageUserVoteDetails_t__Class>(type_info, "Steamworks", "RemoteStorageUserVoteDetails_t");
        }
        inline app::RemoteStorageUserVoteDetails_t* create() {
            return il2cpp::create_object<app::RemoteStorageUserVoteDetails_t>(get_class());
        }
        inline app::RemoteStorageUserVoteDetails_t__Boxed* box(app::RemoteStorageUserVoteDetails_t value) {
            return il2cpp::box_value<app::RemoteStorageUserVoteDetails_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageUserVoteDetails_t
} // namespace app::classes::types
