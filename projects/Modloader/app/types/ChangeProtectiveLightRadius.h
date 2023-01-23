#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChangeProtectiveLightRadius__Class.h>
#include <Modloader/app/structs/ChangeProtectiveLightRadius.h>

namespace app::classes::types {
    namespace ChangeProtectiveLightRadius {
        namespace {
            inline app::ChangeProtectiveLightRadius__Class* type_info_ref = nullptr;
        }
        inline app::ChangeProtectiveLightRadius__Class** type_info = &type_info_ref;
        inline app::ChangeProtectiveLightRadius__Class* get_class() {
            return il2cpp::get_class<app::ChangeProtectiveLightRadius__Class>(type_info, "", "ChangeProtectiveLightRadius");
        }
        inline app::ChangeProtectiveLightRadius* create() {
            return il2cpp::create_object<app::ChangeProtectiveLightRadius>(get_class());
        }
    } // namespace ChangeProtectiveLightRadius
} // namespace app::classes::types
