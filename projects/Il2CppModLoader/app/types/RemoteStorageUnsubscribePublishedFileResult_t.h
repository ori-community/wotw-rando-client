#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoteStorageUnsubscribePublishedFileResult_t {
        namespace {
            inline app::RemoteStorageUnsubscribePublishedFileResult_t__Class* type_info_ref = nullptr;
        }
        inline app::RemoteStorageUnsubscribePublishedFileResult_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageUnsubscribePublishedFileResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageUnsubscribePublishedFileResult_t__Class>(type_info, "Steamworks", "RemoteStorageUnsubscribePublishedFileResult_t");
        }
        inline app::RemoteStorageUnsubscribePublishedFileResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageUnsubscribePublishedFileResult_t>(get_class());
        }
        inline app::RemoteStorageUnsubscribePublishedFileResult_t__Boxed* box(app::RemoteStorageUnsubscribePublishedFileResult_t value) {
            return il2cpp::box_value<app::RemoteStorageUnsubscribePublishedFileResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageUnsubscribePublishedFileResult_t
} // namespace app::classes::types
