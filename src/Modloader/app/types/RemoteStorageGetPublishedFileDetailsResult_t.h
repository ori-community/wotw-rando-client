#pragma once
#include <Modloader/app/structs/RemoteStorageGetPublishedFileDetailsResult_t.h>
#include <Modloader/app/structs/RemoteStorageGetPublishedFileDetailsResult_t__Boxed.h>
#include <Modloader/app/structs/RemoteStorageGetPublishedFileDetailsResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageGetPublishedFileDetailsResult_t {
        inline app::RemoteStorageGetPublishedFileDetailsResult_t__Class** type_info() {
            static app::RemoteStorageGetPublishedFileDetailsResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteStorageGetPublishedFileDetailsResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteStorageGetPublishedFileDetailsResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageGetPublishedFileDetailsResult_t__Class>(type_info(), "Steamworks", "RemoteStorageGetPublishedFileDetailsResult_t");
        }
        inline app::RemoteStorageGetPublishedFileDetailsResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageGetPublishedFileDetailsResult_t>(get_class());
        }
        inline app::RemoteStorageGetPublishedFileDetailsResult_t__Boxed* box(app::RemoteStorageGetPublishedFileDetailsResult_t value) {
            return il2cpp::box_value<app::RemoteStorageGetPublishedFileDetailsResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageGetPublishedFileDetailsResult_t
} // namespace app::classes::types
