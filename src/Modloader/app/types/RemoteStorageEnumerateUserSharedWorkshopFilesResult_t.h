#pragma once
#include <Modloader/app/structs/RemoteStorageEnumerateUserSharedWorkshopFilesResult_t.h>
#include <Modloader/app/structs/RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Boxed.h>
#include <Modloader/app/structs/RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageEnumerateUserSharedWorkshopFilesResult_t {
        inline app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Class** type_info() {
            static app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Class>(type_info(), "Steamworks", "RemoteStorageEnumerateUserSharedWorkshopFilesResult_t");
        }
        inline app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t>(get_class());
        }
        inline app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Boxed* box(app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t value) {
            return il2cpp::box_value<app::RemoteStorageEnumerateUserSharedWorkshopFilesResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageEnumerateUserSharedWorkshopFilesResult_t
} // namespace app::classes::types
