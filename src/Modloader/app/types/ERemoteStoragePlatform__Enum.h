#pragma once
#include <Modloader/app/structs/ERemoteStoragePlatform__Enum.h>
#include <Modloader/app/structs/ERemoteStoragePlatform__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ERemoteStoragePlatform__Enum {
        inline app::ERemoteStoragePlatform__Enum__Class** type_info() {
            static app::ERemoteStoragePlatform__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ERemoteStoragePlatform__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ERemoteStoragePlatform__Enum__Class* get_class() {
            return il2cpp::get_class<app::ERemoteStoragePlatform__Enum__Class>(type_info(), "Steamworks", "ERemoteStoragePlatform");
        }
        inline app::ERemoteStoragePlatform__Enum* create() {
            return il2cpp::create_object<app::ERemoteStoragePlatform__Enum>(get_class());
        }
    } // namespace ERemoteStoragePlatform__Enum
} // namespace app::classes::types
