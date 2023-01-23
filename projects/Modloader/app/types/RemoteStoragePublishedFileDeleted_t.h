#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RemoteStoragePublishedFileDeleted_t__Class.h>
#include <Modloader/app/structs/RemoteStoragePublishedFileDeleted_t.h>
#include <Modloader/app/structs/RemoteStoragePublishedFileDeleted_t__Boxed.h>

namespace app::classes::types {
    namespace RemoteStoragePublishedFileDeleted_t {
        namespace {
            inline app::RemoteStoragePublishedFileDeleted_t__Class* type_info_ref = nullptr;
        }
        inline app::RemoteStoragePublishedFileDeleted_t__Class** type_info = &type_info_ref;
        inline app::RemoteStoragePublishedFileDeleted_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStoragePublishedFileDeleted_t__Class>(type_info, "Steamworks", "RemoteStoragePublishedFileDeleted_t");
        }
        inline app::RemoteStoragePublishedFileDeleted_t* create() {
            return il2cpp::create_object<app::RemoteStoragePublishedFileDeleted_t>(get_class());
        }
        inline app::RemoteStoragePublishedFileDeleted_t__Boxed* box(app::RemoteStoragePublishedFileDeleted_t value) {
            return il2cpp::box_value<app::RemoteStoragePublishedFileDeleted_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStoragePublishedFileDeleted_t
} // namespace app::classes::types
