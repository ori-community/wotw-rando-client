#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/AkSoundEngineController.h>

namespace app::classes::AkSoundEngineController {
    IL2CPP_REGISTER_METHOD(0x018B7960, app::String*, GetDecodedBankFolder, ())
    IL2CPP_REGISTER_METHOD(0x018B79E0, app::String*, GetDecodedBankFullPath, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AkSoundEngineController * this_ptr))
} // namespace app::classes::AkSoundEngineController
