#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RemoteStorageGetPublishedItemVoteDetailsResult_t__Class.h>
#include <Modloader/app/structs/RemoteStorageGetPublishedItemVoteDetailsResult_t.h>
#include <Modloader/app/structs/RemoteStorageGetPublishedItemVoteDetailsResult_t__Boxed.h>

namespace app::classes::types {
    namespace RemoteStorageGetPublishedItemVoteDetailsResult_t {
        namespace {
            inline app::RemoteStorageGetPublishedItemVoteDetailsResult_t__Class* type_info_ref = nullptr;
        }
        inline app::RemoteStorageGetPublishedItemVoteDetailsResult_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageGetPublishedItemVoteDetailsResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageGetPublishedItemVoteDetailsResult_t__Class>(type_info, "Steamworks", "RemoteStorageGetPublishedItemVoteDetailsResult_t");
        }
        inline app::RemoteStorageGetPublishedItemVoteDetailsResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageGetPublishedItemVoteDetailsResult_t>(get_class());
        }
        inline app::RemoteStorageGetPublishedItemVoteDetailsResult_t__Boxed* box(app::RemoteStorageGetPublishedItemVoteDetailsResult_t value) {
            return il2cpp::box_value<app::RemoteStorageGetPublishedItemVoteDetailsResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageGetPublishedItemVoteDetailsResult_t
} // namespace app::classes::types
