#pragma once
#include <Modloader/app/structs/ERemoteStoragePublishedFileVisibility__Enum.h>
#include <Modloader/app/structs/ERemoteStoragePublishedFileVisibility__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ERemoteStoragePublishedFileVisibility__Enum {
        inline app::ERemoteStoragePublishedFileVisibility__Enum__Class** type_info() {
            static app::ERemoteStoragePublishedFileVisibility__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ERemoteStoragePublishedFileVisibility__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ERemoteStoragePublishedFileVisibility__Enum__Class* get_class() {
            return il2cpp::get_class<app::ERemoteStoragePublishedFileVisibility__Enum__Class>(type_info(), "Steamworks", "ERemoteStoragePublishedFileVisibility");
        }
        inline app::ERemoteStoragePublishedFileVisibility__Enum* create() {
            return il2cpp::create_object<app::ERemoteStoragePublishedFileVisibility__Enum>(get_class());
        }
    } // namespace ERemoteStoragePublishedFileVisibility__Enum
} // namespace app::classes::types
