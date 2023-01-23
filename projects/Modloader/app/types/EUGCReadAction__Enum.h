#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EUGCReadAction__Enum__Class.h>
#include <Modloader/app/structs/EUGCReadAction__Enum.h>

namespace app::classes::types {
    namespace EUGCReadAction__Enum {
        namespace {
            inline app::EUGCReadAction__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EUGCReadAction__Enum__Class** type_info = &type_info_ref;
        inline app::EUGCReadAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::EUGCReadAction__Enum__Class>(type_info, "Steamworks", "EUGCReadAction");
        }
        inline app::EUGCReadAction__Enum* create() {
            return il2cpp::create_object<app::EUGCReadAction__Enum>(get_class());
        }
    } // namespace EUGCReadAction__Enum
} // namespace app::classes::types
