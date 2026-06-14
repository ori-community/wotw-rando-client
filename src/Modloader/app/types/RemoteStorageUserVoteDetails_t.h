#pragma once
#include <Modloader/app/structs/RemoteStorageUserVoteDetails_t.h>
#include <Modloader/app/structs/RemoteStorageUserVoteDetails_t__Boxed.h>
#include <Modloader/app/structs/RemoteStorageUserVoteDetails_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageUserVoteDetails_t {
        inline app::RemoteStorageUserVoteDetails_t__Class** type_info() {
            static app::RemoteStorageUserVoteDetails_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteStorageUserVoteDetails_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteStorageUserVoteDetails_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageUserVoteDetails_t__Class>(type_info(), "Steamworks", "RemoteStorageUserVoteDetails_t");
        }
        inline app::RemoteStorageUserVoteDetails_t* create() {
            return il2cpp::create_object<app::RemoteStorageUserVoteDetails_t>(get_class());
        }
        inline app::RemoteStorageUserVoteDetails_t__Boxed* box(app::RemoteStorageUserVoteDetails_t value) {
            return il2cpp::box_value<app::RemoteStorageUserVoteDetails_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageUserVoteDetails_t
} // namespace app::classes::types
