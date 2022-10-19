#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoteStorageFileWriteAsyncComplete_t {
        namespace {
            inline app::RemoteStorageFileWriteAsyncComplete_t__Class* type_info_ref = nullptr;
        }
        inline app::RemoteStorageFileWriteAsyncComplete_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageFileWriteAsyncComplete_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageFileWriteAsyncComplete_t__Class>(type_info, "Steamworks", "RemoteStorageFileWriteAsyncComplete_t");
        }
        inline app::RemoteStorageFileWriteAsyncComplete_t* create() {
            return il2cpp::create_object<app::RemoteStorageFileWriteAsyncComplete_t>(get_class());
        }
        inline app::RemoteStorageFileWriteAsyncComplete_t__Boxed* box(app::RemoteStorageFileWriteAsyncComplete_t value) {
            return il2cpp::box_value<app::RemoteStorageFileWriteAsyncComplete_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageFileWriteAsyncComplete_t
} // namespace app::classes::types
