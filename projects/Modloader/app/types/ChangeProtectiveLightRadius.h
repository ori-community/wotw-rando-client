#pragma once
#include <Modloader/app/structs/ChangeProtectiveLightRadius.h>
#include <Modloader/app/structs/ChangeProtectiveLightRadius__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeProtectiveLightRadius {
        inline app::ChangeProtectiveLightRadius__Class** type_info() {
            static app::ChangeProtectiveLightRadius__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeProtectiveLightRadius__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeProtectiveLightRadius__Class* get_class() {
            return il2cpp::get_class<app::ChangeProtectiveLightRadius__Class>(type_info(), "", "ChangeProtectiveLightRadius");
        }
        inline app::ChangeProtectiveLightRadius* create() {
            return il2cpp::create_object<app::ChangeProtectiveLightRadius>(get_class());
        }
    } // namespace ChangeProtectiveLightRadius
} // namespace app::classes::types
