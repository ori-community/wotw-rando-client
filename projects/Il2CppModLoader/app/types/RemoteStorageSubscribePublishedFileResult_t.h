#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoteStorageSubscribePublishedFileResult_t {
        namespace {
            inline app::RemoteStorageSubscribePublishedFileResult_t__Class* type_info_ref = nullptr;
        }
        inline app::RemoteStorageSubscribePublishedFileResult_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageSubscribePublishedFileResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageSubscribePublishedFileResult_t__Class>(type_info, "Steamworks", "RemoteStorageSubscribePublishedFileResult_t");
        }
        inline app::RemoteStorageSubscribePublishedFileResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageSubscribePublishedFileResult_t>(get_class());
        }
        inline app::RemoteStorageSubscribePublishedFileResult_t__Boxed* box(app::RemoteStorageSubscribePublishedFileResult_t value) {
            return il2cpp::box_value<app::RemoteStorageSubscribePublishedFileResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageSubscribePublishedFileResult_t
} // namespace app::classes::types
