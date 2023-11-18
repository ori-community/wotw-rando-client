#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WaitBeforeIntroLogosOperation.h>

namespace app::classes::frameworks::loading::Prewarmers::WaitBeforeIntroLogosOperation {
    IL2CPP_REGISTER_METHOD(0x00F62B80, void, ctor, (app::WaitBeforeIntroLogosOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F62C30, bool, Update, (app::WaitBeforeIntroLogosOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F62D10, bool, FinishImmediately, (app::WaitBeforeIntroLogosOperation * this_ptr))
} // namespace app::classes::frameworks::loading::Prewarmers::WaitBeforeIntroLogosOperation
