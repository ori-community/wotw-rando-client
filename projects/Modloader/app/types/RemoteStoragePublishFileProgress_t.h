#pragma once
#include <Modloader/app/structs/RemoteStoragePublishFileProgress_t.h>
#include <Modloader/app/structs/RemoteStoragePublishFileProgress_t__Boxed.h>
#include <Modloader/app/structs/RemoteStoragePublishFileProgress_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteStoragePublishFileProgress_t {
        inline app::RemoteStoragePublishFileProgress_t__Class** type_info() {
            static app::RemoteStoragePublishFileProgress_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteStoragePublishFileProgress_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteStoragePublishFileProgress_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStoragePublishFileProgress_t__Class>(type_info(), "Steamworks", "RemoteStoragePublishFileProgress_t");
        }
        inline app::RemoteStoragePublishFileProgress_t* create() {
            return il2cpp::create_object<app::RemoteStoragePublishFileProgress_t>(get_class());
        }
        inline app::RemoteStoragePublishFileProgress_t__Boxed* box(app::RemoteStoragePublishFileProgress_t value) {
            return il2cpp::box_value<app::RemoteStoragePublishFileProgress_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStoragePublishFileProgress_t
} // namespace app::classes::types
