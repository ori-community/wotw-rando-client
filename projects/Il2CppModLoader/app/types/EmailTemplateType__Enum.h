#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmailTemplateType__Enum {
        namespace {
            app::EmailTemplateType__Enum__Class* type_info_ref = nullptr;
        }
        app::EmailTemplateType__Enum__Class** type_info = &type_info_ref;
        inline app::EmailTemplateType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EmailTemplateType__Enum__Class>(type_info, "PlayFab.PlayStreamModels", "EmailTemplateType");
        }
        inline app::EmailTemplateType__Enum* create() {
            return il2cpp::create_object<app::EmailTemplateType__Enum>(get_class());
        }
    } // namespace EmailTemplateType__Enum
} // namespace app::classes::types
