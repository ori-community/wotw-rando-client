#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MailSettingsSectionGroup.h>
#include <Modloader/app/structs/SmtpSection.h>

namespace app::classes::System::Net::Configuration::MailSettingsSectionGroup {
    IL2CPP_REGISTER_METHOD(0x02019C50, void, ctor, app::MailSettingsSectionGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02019C80, app::SmtpSection*, get_Smtp, app::MailSettingsSectionGroup* this_ptr)
} // namespace app::classes::System::Net::Configuration::MailSettingsSectionGroup
