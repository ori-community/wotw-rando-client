#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteStoragePublishedFileSubscribed_t {
        namespace {
            app::RemoteStoragePublishedFileSubscribed_t__Class* type_info_ref = nullptr;
        }
        app::RemoteStoragePublishedFileSubscribed_t__Class** type_info = &type_info_ref;
        inline app::RemoteStoragePublishedFileSubscribed_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStoragePublishedFileSubscribed_t__Class>(type_info, "Steamworks", "RemoteStoragePublishedFileSubscribed_t");
        }
        inline app::RemoteStoragePublishedFileSubscribed_t* create() {
            return il2cpp::create_object<app::RemoteStoragePublishedFileSubscribed_t>(get_class());
        }
        inline app::RemoteStoragePublishedFileSubscribed_t__Boxed* box(app::RemoteStoragePublishedFileSubscribed_t value) {
            return il2cpp::box_value<app::RemoteStoragePublishedFileSubscribed_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStoragePublishedFileSubscribed_t
} // namespace app::classes::types
