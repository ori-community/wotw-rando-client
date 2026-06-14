#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeLicenseContext.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::Design::DesigntimeLicenseContextSerializer {
    IL2CPP_REGISTER_METHOD(0x01FE3540, void, Deserialize, app::Stream* o, app::String* crypto_key, app::RuntimeLicenseContext* context)
}
