#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AssertionException.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Assertions::AssertionException {
    IL2CPP_REGISTER_METHOD(0x0241DA00, void, ctor, app::AssertionException* this_ptr, app::String* message, app::String* user_message)
    IL2CPP_REGISTER_METHOD(0x0241DAC0, app::String*, get_Message, app::AssertionException* this_ptr)
} // namespace app::classes::UnityEngine::Assertions::AssertionException
