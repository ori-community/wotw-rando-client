#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoteStoragePublishedFileUpdated_t {
        namespace {
            inline app::RemoteStoragePublishedFileUpdated_t__Class* type_info_ref = nullptr;
        }
        inline app::RemoteStoragePublishedFileUpdated_t__Class** type_info = &type_info_ref;
        inline app::RemoteStoragePublishedFileUpdated_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStoragePublishedFileUpdated_t__Class>(type_info, "Steamworks", "RemoteStoragePublishedFileUpdated_t");
        }
        inline app::RemoteStoragePublishedFileUpdated_t* create() {
            return il2cpp::create_object<app::RemoteStoragePublishedFileUpdated_t>(get_class());
        }
        inline app::RemoteStoragePublishedFileUpdated_t__Boxed* box(app::RemoteStoragePublishedFileUpdated_t value) {
            return il2cpp::box_value<app::RemoteStoragePublishedFileUpdated_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStoragePublishedFileUpdated_t
} // namespace app::classes::types
