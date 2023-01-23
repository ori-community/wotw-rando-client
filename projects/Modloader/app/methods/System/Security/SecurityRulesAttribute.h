#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SecurityRulesAttribute.h>
#include <Modloader/app/structs/SecurityRuleSet__Enum.h>

namespace app::classes::System::Security::SecurityRulesAttribute {
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor, (app::SecurityRulesAttribute * this_ptr, app::SecurityRuleSet__Enum rule_set))
    IL2CPP_REGISTER_METHOD(0x0052C660, void, set_SkipVerificationInFullTrust, (app::SecurityRulesAttribute * this_ptr, bool value))
} // namespace app::classes::System::Security::SecurityRulesAttribute
