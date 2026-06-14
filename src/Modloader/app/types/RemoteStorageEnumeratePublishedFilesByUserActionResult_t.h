#pragma once
#include <Modloader/app/structs/RemoteStorageEnumeratePublishedFilesByUserActionResult_t.h>
#include <Modloader/app/structs/RemoteStorageEnumeratePublishedFilesByUserActionResult_t__Boxed.h>
#include <Modloader/app/structs/RemoteStorageEnumeratePublishedFilesByUserActionResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageEnumeratePublishedFilesByUserActionResult_t {
        inline app::RemoteStorageEnumeratePublishedFilesByUserActionResult_t__Class** type_info() {
            static app::RemoteStorageEnumeratePublishedFilesByUserActionResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteStorageEnumeratePublishedFilesByUserActionResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteStorageEnumeratePublishedFilesByUserActionResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageEnumeratePublishedFilesByUserActionResult_t__Class>(type_info(), "Steamworks", "RemoteStorageEnumeratePublishedFilesByUserActionResult_t");
        }
        inline app::RemoteStorageEnumeratePublishedFilesByUserActionResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageEnumeratePublishedFilesByUserActionResult_t>(get_class());
        }
        inline app::RemoteStorageEnumeratePublishedFilesByUserActionResult_t__Boxed* box(app::RemoteStorageEnumeratePublishedFilesByUserActionResult_t value) {
            return il2cpp::box_value<app::RemoteStorageEnumeratePublishedFilesByUserActionResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageEnumeratePublishedFilesByUserActionResult_t
} // namespace app::classes::types
