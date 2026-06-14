#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/SimpleScripting.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::SimpleScripting {
    IL2CPP_REGISTER_METHOD(0x0166BC70, void, Start, app::SimpleScripting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0166BEA0, void, GetUsername, app::SimpleScripting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0166C140, void, ChangeColor, app::SimpleScripting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0166C440, void, GetUsername2, app::SimpleScripting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0166C590, app::IEnumerator*, _GetUsername2, app::SimpleScripting* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0166C6E0, void, ctor, app::SimpleScripting* this_ptr)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::SimpleScripting
