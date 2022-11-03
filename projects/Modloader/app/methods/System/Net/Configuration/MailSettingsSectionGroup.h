#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::Configuration::MailSettingsSectionGroup {
    IL2CPP_REGISTER_METHOD(0x02019C50, void, ctor, (app::MailSettingsSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470F070, MailSettingsSectionGroup__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019C80, app::SmtpSection*, get_Smtp, (app::MailSettingsSectionGroup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470B1F0, MailSettingsSectionGroup_get_Smtp__MethodInfo)
} // namespace app::classes::System::Net::Configuration::MailSettingsSectionGroup
