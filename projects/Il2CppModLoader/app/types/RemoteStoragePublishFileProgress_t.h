#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteStoragePublishFileProgress_t {
        namespace {
            app::RemoteStoragePublishFileProgress_t__Class* type_info_ref = nullptr;
        }
        app::RemoteStoragePublishFileProgress_t__Class** type_info = &type_info_ref;
        inline app::RemoteStoragePublishFileProgress_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStoragePublishFileProgress_t__Class>(type_info, "Steamworks", "RemoteStoragePublishFileProgress_t");
        }
        inline app::RemoteStoragePublishFileProgress_t* create() {
            return il2cpp::create_object<app::RemoteStoragePublishFileProgress_t>(get_class());
        }
        inline app::RemoteStoragePublishFileProgress_t__Boxed* box(app::RemoteStoragePublishFileProgress_t value) {
            return il2cpp::box_value<app::RemoteStoragePublishFileProgress_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStoragePublishFileProgress_t
} // namespace app::classes::types
