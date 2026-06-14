#pragma once
#include <Modloader/app/structs/RemoteStorageFileShareResult_t.h>
#include <Modloader/app/structs/RemoteStorageFileShareResult_t__Boxed.h>
#include <Modloader/app/structs/RemoteStorageFileShareResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageFileShareResult_t {
        inline app::RemoteStorageFileShareResult_t__Class** type_info() {
            static app::RemoteStorageFileShareResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteStorageFileShareResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteStorageFileShareResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageFileShareResult_t__Class>(type_info(), "Steamworks", "RemoteStorageFileShareResult_t");
        }
        inline app::RemoteStorageFileShareResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageFileShareResult_t>(get_class());
        }
        inline app::RemoteStorageFileShareResult_t__Boxed* box(app::RemoteStorageFileShareResult_t value) {
            return il2cpp::box_value<app::RemoteStorageFileShareResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageFileShareResult_t
} // namespace app::classes::types
