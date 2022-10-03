#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AkSoundEngineController {
    IL2CPP_REGISTER_METHOD(0x018B7960, app::String*, GetDecodedBankFolder, ())
    IL2CPP_REGISTER_METHOD(0x018B79E0, app::String*, GetDecodedBankFullPath, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AkSoundEngineController * this_ptr))
} // namespace app::classes::AkSoundEngineController
