#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RemoteStoragePublishFileResult_t__Class.h>
#include <Modloader/app/structs/RemoteStoragePublishFileResult_t.h>
#include <Modloader/app/structs/RemoteStoragePublishFileResult_t__Boxed.h>

namespace app::classes::types {
    namespace RemoteStoragePublishFileResult_t {
        namespace {
            inline app::RemoteStoragePublishFileResult_t__Class* type_info_ref = nullptr;
        }
        inline app::RemoteStoragePublishFileResult_t__Class** type_info = &type_info_ref;
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
