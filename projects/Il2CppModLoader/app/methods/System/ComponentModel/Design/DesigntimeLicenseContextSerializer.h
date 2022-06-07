#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::Design::DesigntimeLicenseContextSerializer {
    IL2CPP_REGISTER_METHOD(0x01FE3540, void, Deserialize, (app::Stream * o, app::String * crypto_key, app::RuntimeLicenseContext * context))
}
