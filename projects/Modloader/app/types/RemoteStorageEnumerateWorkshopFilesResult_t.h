#pragma once
#include <Modloader/app/structs/RemoteStorageEnumerateWorkshopFilesResult_t.h>
#include <Modloader/app/structs/RemoteStorageEnumerateWorkshopFilesResult_t__Boxed.h>
#include <Modloader/app/structs/RemoteStorageEnumerateWorkshopFilesResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageEnumerateWorkshopFilesResult_t {
        inline app::RemoteStorageEnumerateWorkshopFilesResult_t__Class** type_info() {
            static app::RemoteStorageEnumerateWorkshopFilesResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteStorageEnumerateWorkshopFilesResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteStorageEnumerateWorkshopFilesResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageEnumerateWorkshopFilesResult_t__Class>(type_info(), "Steamworks", "RemoteStorageEnumerateWorkshopFilesResult_t");
        }
        inline app::RemoteStorageEnumerateWorkshopFilesResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageEnumerateWorkshopFilesResult_t>(get_class());
        }
        inline app::RemoteStorageEnumerateWorkshopFilesResult_t__Boxed* box(app::RemoteStorageEnumerateWorkshopFilesResult_t value) {
            return il2cpp::box_value<app::RemoteStorageEnumerateWorkshopFilesResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageEnumerateWorkshopFilesResult_t
} // namespace app::classes::types
