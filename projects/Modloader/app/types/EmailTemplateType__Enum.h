#pragma once
#include <Modloader/app/structs/EmailTemplateType__Enum.h>
#include <Modloader/app/structs/EmailTemplateType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmailTemplateType__Enum {
        inline app::EmailTemplateType__Enum__Class** type_info() {
            static app::EmailTemplateType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EmailTemplateType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EmailTemplateType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EmailTemplateType__Enum__Class>(type_info(), "PlayFab.PlayStreamModels", "EmailTemplateType");
        }
        inline app::EmailTemplateType__Enum* create() {
            return il2cpp::create_object<app::EmailTemplateType__Enum>(get_class());
        }
    } // namespace EmailTemplateType__Enum
} // namespace app::classes::types
