#pragma once
#include <Modloader/app/structs/RemoteStorageFileReadAsyncComplete_t.h>
#include <Modloader/app/structs/RemoteStorageFileReadAsyncComplete_t__Boxed.h>
#include <Modloader/app/structs/RemoteStorageFileReadAsyncComplete_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageFileReadAsyncComplete_t {
        inline app::RemoteStorageFileReadAsyncComplete_t__Class** type_info() {
            static app::RemoteStorageFileReadAsyncComplete_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteStorageFileReadAsyncComplete_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteStorageFileReadAsyncComplete_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageFileReadAsyncComplete_t__Class>(type_info(), "Steamworks", "RemoteStorageFileReadAsyncComplete_t");
        }
        inline app::RemoteStorageFileReadAsyncComplete_t* create() {
            return il2cpp::create_object<app::RemoteStorageFileReadAsyncComplete_t>(get_class());
        }
        inline app::RemoteStorageFileReadAsyncComplete_t__Boxed* box(app::RemoteStorageFileReadAsyncComplete_t value) {
            return il2cpp::box_value<app::RemoteStorageFileReadAsyncComplete_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageFileReadAsyncComplete_t
} // namespace app::classes::types
