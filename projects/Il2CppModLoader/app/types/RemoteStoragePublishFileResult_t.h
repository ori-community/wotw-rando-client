#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteStoragePublishFileResult_t {
        namespace {
            app::RemoteStoragePublishFileResult_t__Class* type_info_ref = nullptr;
        }
        app::RemoteStoragePublishFileResult_t__Class** type_info = &type_info_ref;
        inline app::RemoteStoragePublishFileResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStoragePublishFileResult_t__Class>(type_info, "Steamworks", "RemoteStoragePublishFileResult_t");
        }
        inline app::RemoteStoragePublishFileResult_t* create() {
            return il2cpp::create_object<app::RemoteStoragePublishFileResult_t>(get_class());
        }
        inline app::RemoteStoragePublishFileResult_t__Boxed* box(app::RemoteStoragePublishFileResult_t value) {
            return il2cpp::box_value<app::RemoteStoragePublishFileResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStoragePublishFileResult_t
} // namespace app::classes::types
