#pragma once
#include <Modloader/app/structs/RemoteStorageFileWriteAsyncComplete_t.h>
#include <Modloader/app/structs/RemoteStorageFileWriteAsyncComplete_t__Boxed.h>
#include <Modloader/app/structs/RemoteStorageFileWriteAsyncComplete_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageFileWriteAsyncComplete_t {
        inline app::RemoteStorageFileWriteAsyncComplete_t__Class** type_info() {
            static app::RemoteStorageFileWriteAsyncComplete_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteStorageFileWriteAsyncComplete_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteStorageFileWriteAsyncComplete_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageFileWriteAsyncComplete_t__Class>(type_info(), "Steamworks", "RemoteStorageFileWriteAsyncComplete_t");
        }
        inline app::RemoteStorageFileWriteAsyncComplete_t* create() {
            return il2cpp::create_object<app::RemoteStorageFileWriteAsyncComplete_t>(get_class());
        }
        inline app::RemoteStorageFileWriteAsyncComplete_t__Boxed* box(app::RemoteStorageFileWriteAsyncComplete_t value) {
            return il2cpp::box_value<app::RemoteStorageFileWriteAsyncComplete_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageFileWriteAsyncComplete_t
} // namespace app::classes::types
