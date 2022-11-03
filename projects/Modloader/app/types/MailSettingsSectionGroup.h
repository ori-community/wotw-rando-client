#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MailSettingsSectionGroup {
        namespace {
            inline app::MailSettingsSectionGroup__Class* type_info_ref = nullptr;
        }
        inline app::MailSettingsSectionGroup__Class** type_info = &type_info_ref;
        inline app::MailSettingsSectionGroup__Class* get_class() {
            return il2cpp::get_class<app::MailSettingsSectionGroup__Class>(type_info, "System.Net.Configuration", "MailSettingsSectionGroup");
        }
        inline app::MailSettingsSectionGroup* create() {
            return il2cpp::create_object<app::MailSettingsSectionGroup>(get_class());
        }
    } // namespace MailSettingsSectionGroup
} // namespace app::classes::types
