#pragma once
#include <Modloader/app/structs/RemoteStorageSubscribePublishedFileResult_t.h>
#include <Modloader/app/structs/RemoteStorageSubscribePublishedFileResult_t__Boxed.h>
#include <Modloader/app/structs/RemoteStorageSubscribePublishedFileResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageSubscribePublishedFileResult_t {
        inline app::RemoteStorageSubscribePublishedFileResult_t__Class** type_info() {
            static app::RemoteStorageSubscribePublishedFileResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteStorageSubscribePublishedFileResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteStorageSubscribePublishedFileResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageSubscribePublishedFileResult_t__Class>(type_info(), "Steamworks", "RemoteStorageSubscribePublishedFileResult_t");
        }
        inline app::RemoteStorageSubscribePublishedFileResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageSubscribePublishedFileResult_t>(get_class());
        }
        inline app::RemoteStorageSubscribePublishedFileResult_t__Boxed* box(app::RemoteStorageSubscribePublishedFileResult_t value) {
            return il2cpp::box_value<app::RemoteStorageSubscribePublishedFileResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageSubscribePublishedFileResult_t
} // namespace app::classes::types
