#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::frameworks::loading::Prewarmers::WaitForAttachOperation {
    IL2CPP_REGISTER_METHOD(0x00F62D20, void, ctor, (app::WaitForAttachOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F62C30, bool, Update, (app::WaitForAttachOperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F62D10, bool, FinishImmediately, (app::WaitForAttachOperation * this_ptr))
} // namespace app::classes::frameworks::loading::Prewarmers::WaitForAttachOperation
