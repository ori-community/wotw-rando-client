#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoteStorageFileShareResult_t {
        namespace {
            inline app::RemoteStorageFileShareResult_t__Class* type_info_ref = nullptr;
        }
        inline app::RemoteStorageFileShareResult_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageFileShareResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageFileShareResult_t__Class>(type_info, "Steamworks", "RemoteStorageFileShareResult_t");
        }
        inline app::RemoteStorageFileShareResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageFileShareResult_t>(get_class());
        }
        inline app::RemoteStorageFileShareResult_t__Boxed* box(app::RemoteStorageFileShareResult_t value) {
            return il2cpp::box_value<app::RemoteStorageFileShareResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageFileShareResult_t
} // namespace app::classes::types
