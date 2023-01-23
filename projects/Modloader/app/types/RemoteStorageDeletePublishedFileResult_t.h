#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RemoteStorageDeletePublishedFileResult_t__Class.h>
#include <Modloader/app/structs/RemoteStorageDeletePublishedFileResult_t.h>
#include <Modloader/app/structs/RemoteStorageDeletePublishedFileResult_t__Boxed.h>

namespace app::classes::types {
    namespace RemoteStorageDeletePublishedFileResult_t {
        namespace {
            inline app::RemoteStorageDeletePublishedFileResult_t__Class* type_info_ref = nullptr;
        }
        inline app::RemoteStorageDeletePublishedFileResult_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageDeletePublishedFileResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageDeletePublishedFileResult_t__Class>(type_info, "Steamworks", "RemoteStorageDeletePublishedFileResult_t");
        }
        inline app::RemoteStorageDeletePublishedFileResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageDeletePublishedFileResult_t>(get_class());
        }
        inline app::RemoteStorageDeletePublishedFileResult_t__Boxed* box(app::RemoteStorageDeletePublishedFileResult_t value) {
            return il2cpp::box_value<app::RemoteStorageDeletePublishedFileResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageDeletePublishedFileResult_t
} // namespace app::classes::types
