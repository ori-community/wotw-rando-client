#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ERemoteStoragePlatform__Enum {
        namespace {
            app::ERemoteStoragePlatform__Enum__Class* type_info_ref = nullptr;
        }
        app::ERemoteStoragePlatform__Enum__Class** type_info = &type_info_ref;
        inline app::ERemoteStoragePlatform__Enum__Class* get_class() {
            return il2cpp::get_class<app::ERemoteStoragePlatform__Enum__Class>(type_info, "Steamworks", "ERemoteStoragePlatform");
        }
        inline app::ERemoteStoragePlatform__Enum* create() {
            return il2cpp::create_object<app::ERemoteStoragePlatform__Enum>(get_class());
        }
    } // namespace ERemoteStoragePlatform__Enum
} // namespace app::classes::types
