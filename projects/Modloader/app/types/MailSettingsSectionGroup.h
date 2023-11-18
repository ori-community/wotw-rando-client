#pragma once
#include <Modloader/app/structs/MailSettingsSectionGroup.h>
#include <Modloader/app/structs/MailSettingsSectionGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MailSettingsSectionGroup {
        inline app::MailSettingsSectionGroup__Class** type_info() {
            static app::MailSettingsSectionGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MailSettingsSectionGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MailSettingsSectionGroup__Class* get_class() {
            return il2cpp::get_class<app::MailSettingsSectionGroup__Class>(type_info(), "System.Net.Configuration", "MailSettingsSectionGroup");
        }
        inline app::MailSettingsSectionGroup* create() {
            return il2cpp::create_object<app::MailSettingsSectionGroup>(get_class());
        }
    } // namespace MailSettingsSectionGroup
} // namespace app::classes::types
