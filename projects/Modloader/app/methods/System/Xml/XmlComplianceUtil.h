#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::XmlComplianceUtil {
    IL2CPP_REGISTER_METHOD(0x01960460, app::String*, NonCDataNormalize, app::String* value)
    IL2CPP_REGISTER_METHOD(0x019607D0, app::String*, CDataNormalize, app::String* value)
} // namespace app::classes::System::Xml::XmlComplianceUtil
