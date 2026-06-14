#pragma once
#include <Modloader/app/structs/EUGCReadAction__Enum.h>
#include <Modloader/app/structs/EUGCReadAction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EUGCReadAction__Enum {
        inline app::EUGCReadAction__Enum__Class** type_info() {
            static app::EUGCReadAction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EUGCReadAction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EUGCReadAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::EUGCReadAction__Enum__Class>(type_info(), "Steamworks", "EUGCReadAction");
        }
        inline app::EUGCReadAction__Enum* create() {
            return il2cpp::create_object<app::EUGCReadAction__Enum>(get_class());
        }
    } // namespace EUGCReadAction__Enum
} // namespace app::classes::types
