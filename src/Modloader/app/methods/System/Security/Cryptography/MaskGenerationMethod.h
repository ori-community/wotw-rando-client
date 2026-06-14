#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MaskGenerationMethod.h>

namespace app::classes::System::Security::Cryptography::MaskGenerationMethod {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MaskGenerationMethod* this_ptr)
}
