#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserScopedSettingAttribute {
        namespace {
            app::UserScopedSettingAttribute__Class* type_info_ref = nullptr;
        }
        app::UserScopedSettingAttribute__Class** type_info = &type_info_ref;
        inline app::UserScopedSettingAttribute__Class* get_class() {
            return il2cpp::get_class<app::UserScopedSettingAttribute__Class>(type_info, "System.Configuration", "UserScopedSettingAttribute");
        }
        inline app::UserScopedSettingAttribute* create() {
            return il2cpp::create_object<app::UserScopedSettingAttribute>(get_class());
        }
    } // namespace UserScopedSettingAttribute
} // namespace app::classes::types
