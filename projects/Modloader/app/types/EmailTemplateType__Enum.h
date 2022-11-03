#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EmailTemplateType__Enum {
        namespace {
            inline app::EmailTemplateType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EmailTemplateType__Enum__Class** type_info = &type_info_ref;
        inline app::EmailTemplateType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EmailTemplateType__Enum__Class>(type_info, "PlayFab.PlayStreamModels", "EmailTemplateType");
        }
        inline app::EmailTemplateType__Enum* create() {
            return il2cpp::create_object<app::EmailTemplateType__Enum>(get_class());
        }
    } // namespace EmailTemplateType__Enum
} // namespace app::classes::types
