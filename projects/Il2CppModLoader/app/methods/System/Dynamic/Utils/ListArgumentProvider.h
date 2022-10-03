#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Dynamic::Utils::ListArgumentProvider {
    IL2CPP_REGISTER_METHOD(0x01F95A70, void, ctor, (app::ListArgumentProvider * this_ptr, app::IArgumentProvider* provider, app::Expression* arg0))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Expression*, get_First, (app::ListArgumentProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F95B10, int32_t, get_ElementCount, (app::ListArgumentProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F95BA0, app::Expression*, GetElement, (app::ListArgumentProvider * this_ptr, int32_t index))
} // namespace app::classes::System::Dynamic::Utils::ListArgumentProvider
