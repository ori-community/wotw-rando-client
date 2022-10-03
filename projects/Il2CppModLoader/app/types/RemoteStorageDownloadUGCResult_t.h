#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageDownloadUGCResult_t {
        namespace {
            app::RemoteStorageDownloadUGCResult_t__Class* type_info_ref = nullptr;
        }
        app::RemoteStorageDownloadUGCResult_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageDownloadUGCResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageDownloadUGCResult_t__Class>(type_info, "Steamworks", "RemoteStorageDownloadUGCResult_t");
        }
        inline app::RemoteStorageDownloadUGCResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageDownloadUGCResult_t>(get_class());
        }
        inline app::RemoteStorageDownloadUGCResult_t__Boxed* box(app::RemoteStorageDownloadUGCResult_t value) {
            return il2cpp::box_value<app::RemoteStorageDownloadUGCResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageDownloadUGCResult_t
} // namespace app::classes::types
