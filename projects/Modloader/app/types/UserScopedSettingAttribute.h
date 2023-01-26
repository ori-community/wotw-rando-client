#pragma once
#include <Modloader/app/structs/UserScopedSettingAttribute.h>
#include <Modloader/app/structs/UserScopedSettingAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserScopedSettingAttribute {
        inline app::UserScopedSettingAttribute__Class** type_info() {
            static app::UserScopedSettingAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserScopedSettingAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserScopedSettingAttribute__Class* get_class() {
            return il2cpp::get_class<app::UserScopedSettingAttribute__Class>(type_info(), "System.Configuration", "UserScopedSettingAttribute");
        }
        inline app::UserScopedSettingAttribute* create() {
            return il2cpp::create_object<app::UserScopedSettingAttribute>(get_class());
        }
    } // namespace UserScopedSettingAttribute
} // namespace app::classes::types
