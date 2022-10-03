#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageEnumerateUserPublishedFilesResult_t {
        namespace {
            app::RemoteStorageEnumerateUserPublishedFilesResult_t__Class* type_info_ref = nullptr;
        }
        app::RemoteStorageEnumerateUserPublishedFilesResult_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageEnumerateUserPublishedFilesResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageEnumerateUserPublishedFilesResult_t__Class>(type_info, "Steamworks", "RemoteStorageEnumerateUserPublishedFilesResult_t");
        }
        inline app::RemoteStorageEnumerateUserPublishedFilesResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageEnumerateUserPublishedFilesResult_t>(get_class());
        }
        inline app::RemoteStorageEnumerateUserPublishedFilesResult_t__Boxed* box(app::RemoteStorageEnumerateUserPublishedFilesResult_t value) {
            return il2cpp::box_value<app::RemoteStorageEnumerateUserPublishedFilesResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageEnumerateUserPublishedFilesResult_t
} // namespace app::classes::types
