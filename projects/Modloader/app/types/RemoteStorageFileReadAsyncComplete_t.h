#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoteStorageFileReadAsyncComplete_t {
        namespace {
            inline app::RemoteStorageFileReadAsyncComplete_t__Class* type_info_ref = nullptr;
        }
        inline app::RemoteStorageFileReadAsyncComplete_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageFileReadAsyncComplete_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageFileReadAsyncComplete_t__Class>(type_info, "Steamworks", "RemoteStorageFileReadAsyncComplete_t");
        }
        inline app::RemoteStorageFileReadAsyncComplete_t* create() {
            return il2cpp::create_object<app::RemoteStorageFileReadAsyncComplete_t>(get_class());
        }
        inline app::RemoteStorageFileReadAsyncComplete_t__Boxed* box(app::RemoteStorageFileReadAsyncComplete_t value) {
            return il2cpp::box_value<app::RemoteStorageFileReadAsyncComplete_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageFileReadAsyncComplete_t
} // namespace app::classes::types
