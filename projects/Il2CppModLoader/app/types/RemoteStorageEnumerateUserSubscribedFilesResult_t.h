#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageEnumerateUserSubscribedFilesResult_t {
        namespace {
            app::RemoteStorageEnumerateUserSubscribedFilesResult_t__Class* type_info_ref = nullptr;
        }
        app::RemoteStorageEnumerateUserSubscribedFilesResult_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageEnumerateUserSubscribedFilesResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageEnumerateUserSubscribedFilesResult_t__Class>(type_info, "Steamworks", "RemoteStorageEnumerateUserSubscribedFilesResult_t");
        }
        inline app::RemoteStorageEnumerateUserSubscribedFilesResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageEnumerateUserSubscribedFilesResult_t>(get_class());
        }
        inline app::RemoteStorageEnumerateUserSubscribedFilesResult_t__Boxed* box(app::RemoteStorageEnumerateUserSubscribedFilesResult_t value) {
            return il2cpp::box_value<app::RemoteStorageEnumerateUserSubscribedFilesResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageEnumerateUserSubscribedFilesResult_t
} // namespace app::classes::types
